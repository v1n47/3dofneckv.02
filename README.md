# 🚀 Project Title

🤖 Project Description
This project controls a custom, lightweight 3DOF (Three Degrees of Freedom) robotic neck constructed out of craft sticks. It utilizes three independent servo motors to achieve a natural range of motion, allowing the neck mechanism to seamlessly handle three distinct rotational axes:

Rotation (Roll): Tilting the head side-to-side.

Yaw: Turning the head left-to-right.

Pitch: Nodding the head up-and-down.

## 📸 Preview

<img src="./images/photo1.jpeg" width="50%" alt="3DOF Neck Mechanism1">
<img src="./images/photo2.jpeg" width="50%" alt="3DOF Neck Mechanism2">
<img src="./images/circuit.jpeg" width="50%" alt="3DOF Neck Mechanism3">
<img src="./images/craft1.jpeg" width="50%" alt="3DOF Neck Mechanism4">
<img src="./images/craft2.jpeg" width="50%" alt="3DOF Neck Mechanism5">

## item used

1. 3s li-ion pack (3x 18650s li-ion cell, BMS, 3s cell holder)
2. LM2596 buck convertor (to reduce the raw voltage of 3 li-ion cell to required voltage)
3. micro controller- Arduino nano
4. 2x mg90s (for tilt and up-down)
5. mg995 (for rotation)
6. a physical stucture

## ✨ Features

🛠️ How to Run It
Clone or download this folder.

Open the project inside VS Code (ensuring you have the PlatformIO IDE extension installed).

Connect your Arduino Nano to your computer using a USB cable.

Set up your serial port monitor to communication speed 115200 baud inside your platformio.ini configuration file using monitor_speed = 115200.

Build and upload the firmware to your Arduino Nano, then connect your independent 3DOF servo motor setup to its external power supply to test the neck movements.
