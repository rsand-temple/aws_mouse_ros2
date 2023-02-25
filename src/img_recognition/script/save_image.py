#!/usr/bin/env python

import os, sys, yaml
import rclpy, rospkg
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
from uuid import uuid1
from img_recognition.srv import save_action, save_actionResponse, select_label, select_labelResponse, picture_interval, picture_intervalResponse
from jetcam_ros.utils import bgr8_to_jpeg

class Save_Image_Node():
    ####
    # param : label, picture_interval
    # service : save_image_action, select_label, picture_interval
    ####  
    def __init__(self):
        # node information
        self.package = "img_recognition"
        rclpy.sleep(2)
        self.node_name = rclpy.get_name()
        self.veh_name = self.node_name.split("/")[1]
        rclpy.loginfo("[{}]  Initializing......".format(self.node_name))

        # CV_bridge
        self.bridge = CvBridge()

        # set local param
        self.save_action_status = False

        # configure subscriber
        self.sub_msg = rclpy.Subscriber("~image/raw", Image, self.convert_image_to_cv2, queue_size=1)
        
        # get / setup ros param
        self.label = self.setup_parameter("~label","default")
        self.yaml_dict = self.read_param_from_file(package=self.package, folder="param", file_name="image_label.yaml")
        self.picture_interval = self.setup_parameter("~picture_interval",0.5)
        self.camera_height = rclpy.get_param(self.veh_name + "/jetson_camera/height", 224)
        self.camera_width = rclpy.get_param(self.veh_name + "/jetson_camera/width", 224)

        # Prepare ros services
        self.srv_save_image = rclpy.Service("~save_image_action",save_action, self.cb_srv_save_image)
        self.srv_select_label = rclpy.Service("~select_label",select_label, self.cb_srv_select_label)
        self.srv_picture_interval = rclpy.Service("~picture_interval",picture_interval, self.cb_srv_picture_interval)

        # directory for image save
        #self.path = os.path.abspath(os.path.join(os.path.dirname(__file__),os.pardir)) # ~/ROSKY/catkin_ws/src/self.folder , use system setting
        self.path = self.getFilePath(package=self.package, folder="image", file_name=self.label)

        # timer
        self.save_image_timer = rclpy.Timer(rclpy.Duration.from_sec(self.picture_interval),self.cb_save_image_timer)
      
        # done information
        rclpy.loginfo("[{}] Your image label : {} ".format(self.node_name, self.label))
        rclpy.loginfo("[{}] If your label is wrong, please change the label.".format(self.node_name))
        rclpy.loginfo("[{}] Remember checkout the image size(width={} ,height={}).".format(self.node_name, self.camera_width, self.camera_height))
        rclpy.loginfo("[{}] You can use service with [srv_client_save_image.py] to start collecting your data!".format(self.node_name))
        rclpy.loginfo("[{}] The label(folder) and image you have :".format(self.node_name))
        
        rclpy.loginfo("[{}] {}".format(self.node_name, sorted(self.yaml_dict.items(), key=lambda x:x[0])))

    def getFilePath(self , package, folder, file_name=None):
        rospack = rospkg.RosPack()
        if file_name == None:
            return rospack.get_path(package) + "/" + folder
        else:
            return rospack.get_path(package) + "/" + folder + "/" + file_name   

    def read_param_from_file(self, package, folder, file_name):
        fname = self.getFilePath(package=package, folder=folder, file_name=file_name)
        folder = os.listdir(rospkg.RosPack().get_path(package) + "/image")
        with open(fname, 'r') as in_file:
            try:
                yaml_dict = yaml.load(in_file)
                for key in list(yaml_dict.keys()):
                    if key not in folder:
                        rclpy.logerr("[{}] Please checkout folder [image] and label in [/param/image_label.yaml]. They are different.".format(self.node_name))
                        #rclpy.loginfo("save_image.py will shutdown. Please shutdown the launch file after it(jetson_camera.py still runnung).")
                        sys.exit()
                if self.label not in yaml_dict.keys() :
                    rclpy.logerr("[{}] Your parameter /rosky/save_image/label [{}] is wrong.".format(self.node_name, self.label))
                    rclpy.logerr("[{}] You can only type {}".format(self.node_name, sorted(yaml_dict)))
                    sys.exit()                         
                else:
                    pass
            except yaml.YAMLError as exc:
                print(" YAML syntax  error. File: {}".format(fname))
        if yaml_dict != None: 
            for label_name in yaml_dict:
                image_count = 0
                for dir_path, dir_names, file_names in os.walk(rospkg.RosPack().get_path(package) + "/image/" + label_name):            
                    for image in file_names:
                        if image.endswith('jpg') or image.endswith('jpeg') :
                            image_count += 1  
                yaml_dict[label_name] = image_count
            return yaml_dict
        else:
            rclpy.loginfo("[{}] Please use  {}  to make the floder for saving data ".format(self.node_name, rospkg.RosPack().get_path(self.folder) + "/script/mkdir.py"))
            self.on_shutdown()

    def convert_image_to_cv2(self,img_msg):
        try:
            # Convert your ROS Image ssage to opencv2
            self.cv2_img = self.bridge.imgmsg_to_cv2(img_msg, desired_encoding="bgr8")
        except CvBridgeError as e:
            print(e) 

    def cb_srv_save_image(self, request):
        if request.value == True:
            self.save_action_status = True
            rclpy.loginfo("[{}] Save action Start!!".format(self.node_name))
        else:
            self.save_action_status = False
            self.yaml_dict = self.read_param_from_file(package=self.package, folder="param", file_name="image_label.yaml")
            if self.label in self.yaml_dict :
                self.label_image_count = self.yaml_dict[self.label]
                set_param = rclpy.set_param("~label_image_count",self.label_image_count) 
                print("")
                rclpy.loginfo("[{}] Save action Stop!!".format(self.node_name))
                rclpy.loginfo("[{}] The label(folder) and image you have :".format(self.node_name))
                rclpy.loginfo("[{}] {} ".format(self.node_name, sorted(self.yaml_dict.items(), key=lambda x:x[0])))

        return save_actionResponse()

    def cb_srv_select_label(self, request):
        if request.value in self.yaml_dict :
            rclpy.set_param("~label",request.value)
            self.label = request.value
            self.path = self.getFilePath(package=self.package, folder="image/" + self.label)
            rclpy.loginfo("[{}] You select the label : [{}]".format(self.node_name, self.label))
            rclpy.loginfo("[{}] Now your image will save in [{}]".format(self.node_name, self.path))
        else:
           rclpy.loginfo("[{}] You don't have the label(folder) [{}] .".format(self.node_name, request.value))
           rclpy.loginfo("[{}] Please use  {}  to make the label(floder) for saving data ".format(self.node_name, rospkg.RosPack().get_path(self.folder) + "/script/mkdir.py"))
        return select_labelResponse()   

    def cb_srv_picture_interval(self, request):
        self.picture_interval = request.value
        rclpy.loginfo("[{}] Picture interval set {} seconds .".format(self.node_name, request.value))
        return picture_intervalResponse() 

    def cb_save_image_timer(self,event):
        if self.save_action_status == True:
            jpeg_img = bgr8_to_jpeg(self.cv2_img)
            self.save_img(jpeg_img)

    def save_img(self,img):
        img_path = os.path.join(self.path, str(uuid1())+ '.jpg')
        with open(img_path, 'wb') as f:
            f.write(img)
        rclpy.loginfo("[{}] save image in {} ".format(self.node_name, self.path))


    def on_shutdown(self): 
        yaml_dict = self.read_param_from_file(package=self.package, folder="param", file_name="image_label.yaml")
        self.write_to_file(package=self.package, folder="param", file_name="image_label.yaml", data=yaml_dict)
        rclpy.loginfo("{} Close.".format(self.node_name))
        rclpy.loginfo("{} shutdown.".format(self.node_name))
        rclpy.sleep(1)
        rclpy.is_shutdown=True
        try:
            sys.exit(0)
        except:
            rclpy.loginfo("[{}] Now you can press [ctrl] + [c] to shutdwon the lauch file.".format(self.node_name))

    def write_to_file(self, package, folder, file_name, data):
        fname = self.getFilePath(package=package, folder=folder, file_name=file_name)
        with open(fname, 'w') as outfile:
            outfile.write(yaml.dump(data, default_flow_style=False))
        rclpy.loginfo("[{}] Save {}".format(self.node_name, fname))

    def setup_parameter(self, param_name, default_value):
        value = rclpy.get_param(param_name, default_value)
        # Write to parameter server for transparency
        rclpy.set_param(param_name, value)
        rclpy.loginfo("[%s] %s = %s " % (self.node_name, param_name, value))
        return value

if __name__ == "__main__" :
    rclpy.init_node("save_image",anonymous=False)
    save_image_node = Save_Image_Node()
    rclpy.on_shutdown(save_image_node.on_shutdown)
    rclpy.spin()