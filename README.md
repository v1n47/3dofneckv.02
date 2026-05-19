# 🚀 Project Title

🤖 Project Description
This project controls a custom, lightweight 3DOF (Three Degrees of Freedom) robotic neck constructed out of craft sticks. It utilizes three independent servo motors to achieve a natural range of motion, allowing the neck mechanism to seamlessly handle three distinct rotational axes:

Rotation (Roll): Tilting the head side-to-side.

Yaw: Turning the head left-to-right.

Pitch: Nodding the head up-and-down.

## 📸 Preview

![My Project Screenshot](./images/screenshot.png)

## ✨ Features

🛠️ How to Run It
Clone or download this folder.

Open the project inside VS Code (ensuring you have the PlatformIO IDE extension installed).

Connect your Arduino Nano to your computer using a USB cable.

Set up your serial port monitor to communication speed 115200 baud inside your platformio.ini configuration file using monitor_speed = 115200.

Build and upload the firmware to your Arduino Nano, then connect your independent 3DOF servo motor setup to its external power supply to test the neck movements.
