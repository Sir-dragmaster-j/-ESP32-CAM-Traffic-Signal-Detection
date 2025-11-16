🚦 ESP32-CAM Traffic Signal Detection → Arduino Control
AI-Based Traffic Light Detection for Autonomous Vehicles

This project uses an ESP32-CAM (OV2640) to detect RED/GREEN traffic lights in real time using image processing.
The ESP32-CAM then sends simple serial commands to an Arduino (UNO/Mega) which controls the robot’s motion.

Perfect for autonomous car projects, lane-following robots, and the IRoC-U competition.

📌 Project Overview

ESP32-CAM captures video frames.

Performs color-based / ML-based traffic light detection.

Sends results to Arduino through UART:

"RED" → Arduino stops the robot

"GREEN" → Arduino resumes movement

Arduino’s main lane-following / obstacle-avoiding logic continues normally.

ESP32-CAM works independently alongside the main sensors.

🛠️ Hardware Required

ESP32-CAM (OV2640)

FTDI Programmer (for flashing)

Arduino UNO / Mega

Robot chassis with DC motors

Motor driver (L298N / TB6612FNG)

Power supply (Li-ion / power bank)

Jumper wires

Traffic light images or real LEDs for testing

🔌 Connections
ESP32-CAM → Arduino (Serial Communication)
ESP32-CAM	Arduino
U0T (TX)	RX (Pin 0 or SoftwareSerial)
GND	GND
5V	5V

Baud Rate: 9600 (recommended)

📑 How It Works

ESP32-CAM analyzes frames for red and green color thresholds
OR uses inbuilt ML logic (based on your code).

Once detection is confirmed:

Sends "RED" or "GREEN" via serial.

Arduino receives string:

If "RED" → STOP motors

If "GREEN" → Continue lane following or previous state

▶️ Usage

Flash the ESP32-CAM code using Arduino IDE with an FTDI adapter

Upload the Arduino control code

Power both boards

Place robot near a traffic signal (printed or real)

Watch the system automatically obey RED/GREEN signals

📂 Repository Structure
📁 ESP32-CAM-Traffic-Detection
 ├── esp32cam_traffic_signal.ino        # ESP32-CAM detection code
 ├── arduino_robot_control.ino          # Arduino lane+signal control
 ├── /images                            # Demo images (optional)
 ├── README.md                          # Documentation
 └── license.txt                        # Optional

📸 ESP32-CAM Preview (Optional)

Add this if you want:

http://<your-esp32-ip>/stream


Live video stream from the camera.

🚀 Features

Real-time traffic signal detection

Low-cost hardware

Works with any Arduino robot

High accuracy at short distances

Easy to integrate with lane following + obstacle detection

Light-weight algorithm for ESP32-CAM

🧠 Future Improvements

Add YOLOv8-Nano traffic light detection

Use color segmentation + contour filtering for stronger accuracy

Add Yellow signal (prepare-to-stop)

Wireless communication using ESP-NOW

Multi-signal detection (crossroads)

📜 License

This project is open-source under the MIT License.

If you want, I can add your exact ESP32-CAM code + Arduino code into the README and format everything perfectly.
