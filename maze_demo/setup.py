import os
from setuptools import setup

package_name = 'maze_demo'

#def package_files(directory):
#    paths = []
#    for (path, directories, filenames) in os.walk(directory):
#        for filename in filenames:
#            paths.append(os.path.join('..', path, filename))
#    return paths

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name,package_name + '/mouse_common'],
#    package_data={'': package_files('launch')},
   
    data_files=[
#        ('share/' + package_name, [package_files('launch')}),
        ('share/' + package_name + '/launch/', ['launch/explore_world.launch']),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rsand',
    maintainer_email='richard.sand0001@temple.edu',
    description='Maze Demo',
    license='Apache2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'maze_demo = maze_demo.maze_runner:main'
        ],
    },
)

