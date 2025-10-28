from setuptools import find_packages, setup

package_name = 'voice_service'

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
    maintainer='mimi',
    maintainer_email='c1513057@st.kanazawa-it.ac.jp',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'voice_client_node = voice_service.voice_client_node:main',
            'voice_service_node = voice_service.voice_service_node:main',
        ],
    },
)
