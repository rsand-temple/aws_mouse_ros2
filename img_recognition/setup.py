from setuptools import setup

package_name = 'img_recognition_resources'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name + '/msg',package_name + '/param'],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Richard Sand',
    maintainer_email='richard.sand0001@temple.edu',
    description='Resources for img_recognition',
    license='Apache2.0',
    tests_require=['pytest'],
    entry_points={
    },
)
