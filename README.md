## Simple ROS 2 Humble Publisher Subscriber Application

A simple ROS 2 Humble Publisher Subscriber application with custom massage: a C++ publisher node reads user input, stamps it with the current ROS time, and publishes it on a topic. A Python subscriber node receives each message, logs the text and timestamps, and computes the end‑to‑end delivery delay. In this example C++ and Python client libraries are in separate packages.

---

### ROS 2 Workspace Layout

```text
ros2_ws/
└── src/
    ├── custom_msg_pkg/      # Custom message definition
    ├── text_publisher/      # C++ publisher node
    └── text_subscriber/     # Python subscriber node
```
### Clone the Repository

```sh
git clone https://github.com/amboka/Simple-Publisher-Subscriber.git
```
---

### Build & Run Instructions

```sh
cd ~/ros2_ws
source /opt/ros/humble/setup.bash
colcon build
source install/setup.bash
```
Then open two terminals:

Terminal 1

```sh
ros2 run text_publisher publisher

```
Terminal 2

```sh
ros2 run text_subscriber subscrib

```

### ✅ Example Outcomes
![WUEPYOeK](https://github.com/user-attachments/assets/f6161966-e5fb-4b45-8fc5-e480a7c021b7)
![d3wYSdsD](https://github.com/user-attachments/assets/882cb676-7793-4295-bdad-c87cdc0c7fbe)


