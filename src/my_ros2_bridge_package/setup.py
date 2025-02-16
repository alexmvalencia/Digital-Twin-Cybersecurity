from setuptools import find_packages, setup

package_name = 'my_ros2_bridge_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ajval',
    maintainer_email='alexmvalencia@vt.edu',
    description='A ROS 2 bridge package for digital twin communication',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'ros2_bridge = my_ros2_bridge_package.ros2_bridge:main',
        ],
    },
)
