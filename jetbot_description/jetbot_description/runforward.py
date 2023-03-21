#! /usr/bin/env python

import sys
import rclpy
from sensor_msgs.msg import LaserScan
from sensor_msgs.msg import Imu
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PoseWithCovariance
#from tf import transformations
from std_srvs.srv import *
from pid_tune.msg import PidTune
from std_msgs.msg import Float32,String
import transforms3d


rotation_odom =0
rotation_imu =0

def clbk_odom(msg):
    global rotation_odom
    global roll_odom, pitch_odom, yaw_odom
    pose = msg.pose.pose
    pos_x=pose.position.x
    pos_y=pose.position.y
    orientation_q = pose.orientation
    orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
    (roll_odom, pitch_odom, yaw_odom) = quat2euler (orientation_list)
    Kp=38
    rotation_odom = - Kp*yaw_odom
    print("Odometry yaw: ",yaw_odom)
    
    
def clbk_imu(msg):
    global rotation_imu
    global roll_imu, pitch_imu, yaw_imu
    orientation_q = msg.orientation
    orientation_list = [orientation_q.x, orientation_q.y, orientation_q.z, orientation_q.w]
    (roll_imu, pitch_imu, yaw_imu) = quat2euler (orientation_list)
    Kp=38
    rotation_imu = - Kp*yaw_imu
    print(" \n IMU yaw: ",yaw_imu)
    

def main():
    global rotation_odom
    global rotation_imu
    #rclpy.init_node('reading_laser')
    # ROS2
    rclpy.init(args=sys.argv)
    node = rclpy.create_node("reading_laser")
    node.get_logger().info('Created node reading_laser')
    
    #pub_ = rclpy.Publisher('/cmd_vel', Twist, queue_size=1)
    #ROS2
    pub_ = node.create_publisher(Twist, '/cmd_vel', rclpy.qos.QoSPolicyKind.RELIABILITY)

    #sub = rclpy.Subscriber('/odom', Odometry, clbk_odom)
    #ROS2
    sub = node.create_subscription(Odometry, "/odom", clbk_odom, 1)

    #sub_imu = rclpy.Subscriber('/imu', Imu, clbk_imu)
    #ROS2
    sub_imu = node.create_subscription(Imu, "/imu", clbk_imu, 1)

    rate = node.create_rate(20)
    while rclpy.ok():
        rate.sleep()
        
        msg = Twist()
        msg.linear.x = 0.1
        msg.angular.z = rotation_imu
        
        pub_.publish(msg)
        rate.sleep()

if __name__ == '__main__':
    main()
