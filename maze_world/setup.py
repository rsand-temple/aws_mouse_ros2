import os
from setuptools import setup

package_name = 'maze_world'

#def package_files(directory):
#    paths = []
#    for (path, directories, filenames) in os.walk(directory):
#        for filename in filenames:
#            paths.append(os.path.join('.', path, filename))
#    return paths

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
#    package_data={'': package_files('launch')},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name + '/launch/', ['launch/world.launch']),
        ('share/' + package_name, ['package.xml']),
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
            'world.launch = maze_world.world.launch:main'
        ],
    },
)
