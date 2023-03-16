from setuptools import setup

package_name = 'awsmouse'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name,package_name + '/mouse_common'],
#    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rsand',
    maintainer_email='richard.sand0001@temple.edu',
    description='AWS Mouse ROS2',
    license='Apache2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mazedemo = awsmouse.mazedemo:main'
        ],
    },
)
