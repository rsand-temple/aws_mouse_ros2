from setuptools import setup
from glob import glob

package_name = 'jetbot_description'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/config/', glob('config/*')),
        ('share/' + package_name + '/launch/', glob('launch/*')),
        ('share/' + package_name + '/meshes/', glob('meshes/*')),
        ('share/' + package_name + '/meshes-jetbot-ros/', glob('meshes-jetbot-ros/*')),
        ('share/' + package_name + '/rviz/', glob('rviz/*')),
        ('share/' + package_name + '/urdf/', glob('urdf/*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rsand',
    maintainer_email='richard.sand0001@temple.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'runforward = jetbot_description.runforward:main'
        ],
    },
)
