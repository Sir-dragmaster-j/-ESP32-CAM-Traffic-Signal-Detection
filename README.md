🚦 ESP32-CAM Traffic Signal Detection (RED / GREEN Output to Arduino)

This project uses an ESP32-CAM (OV2640) to detect RED and GREEN traffic lights.
Based on the detected color, the ESP32-CAM sends a serial message to an Arduino, which controls the robot’s movement (Stop / Go).

This repository contains one single .ino file with the complete detection + serial output logic.

🔥 Highlights

Real-time traffic light color detection

Outputs "RED" or "GREEN" over Serial

Arduino receives the signal and controls the robot

Lightweight algorithm suitable for ESP32-CAM

Ideal for lane-following & autonomous bots

🛠️ Hardware Used

ESP32-CAM (AI Thinker)

FTDI Programmer

Arduino UNO / Mega

Motor Driver (L298N / TB6612)

Robot Chassis + Motors

5V Power Source

🔌 Connections (ESP32-CAM → Arduino)
ESP32-CAM	Arduino
TX	RX
GND	GND
5V	5V

Baud Rate: 9600

▶️ How to Run

Open the .ino file in Arduino IDE

Select board: AI Thinker ESP32-CAM

Connect FTDI and upload

Power the ESP32-CAM

Show RED/GREEN traffic signal images

ESP32-CAM prints and sends:

"RED"

"GREEN"

📁 Project File
ESP32_CAM_Traffic_Signal.ino

🚀 Future Add-Ons

Yellow signal detection

WiFi streaming with overlays

YOLO-based detection

Multi-signal intersection support

📜 License

MIT License — free to use and modify.
