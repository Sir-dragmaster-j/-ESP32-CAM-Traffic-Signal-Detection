🚦 ESP32-CAM Traffic Signal Detection (Serial Output to Arduino)

This project uses an ESP32-CAM to automatically detect RED and GREEN traffic lights using image processing techniques.
Based on detection, the ESP32-CAM sends serial commands to an Arduino, which then controls a robot (stop / go).

Perfect for autonomous car, lane follower, and IRoC-U projects.

📌 Overview

ESP32-CAM captures camera frames

Detects red or green colors (or uses your ML logic)

Sends:

"RED" → Arduino stops the robot

"GREEN" → Arduino moves/continues

Very lightweight and works with any Arduino robot setup.

This repository contains one single .ino file with the complete implementation.

🛠️ Hardware Used

ESP32-CAM (OV2640)

FTDI programmer (to upload code)

Arduino UNO / Mega (optional, used for motor control)

Motor driver (L298N / TB6612FNG)

Robot chassis with motors

Jumper wires

🔌 Wiring (ESP32-CAM → Arduino)
ESP32-CAM	Arduino
TX	RX (Pin 0 or SoftwareSerial RX)
GND	GND
5V	5V

Baud Rate: 9600 (keep this same in both codes)

▶️ Running the Project

Open yourfile.ino in Arduino IDE

Select: AI Thinker ESP32-CAM board

Connect FTDI → ESP32-CAM

Upload the code

Open Serial Monitor (optional)

Place printed/LED traffic signals in front of the camera

ESP32-CAM will output "RED" or "GREEN"

Arduino reads the serial input and acts accordingly

🎯 Features

Real-time detection

Low latency

Fully edge-processed (no PC required)

Compatible with ANY Arduino robot

Extremely simple integration

🧩 File Included
yourfile.ino      # Main code (ESP32-CAM detection + serial output)

🧠 Future Enhancements

Add Yellow signal detection

YOLO-based traffic-light detection for higher accuracy

Add WiFi streaming page with overlay

Add obstacle detection + lane following fusion

📜 License

MIT License — free to use and modify.
