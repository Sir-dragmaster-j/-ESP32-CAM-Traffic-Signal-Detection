<div align="center">
  <img src="https://img.icons8.com/?size=200&id=59804&format=png&color=00FFFF" width="120"/>
</div>

<h1 align="center" style="color:#00E6E6;">🚦 ESP32-CAM Traffic Signal Detection — Neon Vision Edition</h1>
<p align="center" style="color:#CFCFCF;">AI-powered RED/GREEN traffic light detection using ESP32-CAM with serial output to Arduino.</p>

<p align="center">
  <img src="https://img.shields.io/badge/ESP32--CAM-Vision_Engine-00FFFF?style=for-the-badge&logo=espressif&logoColor=white" />
  <img src="https://img.shields.io/badge/Arduino-Control_Brain-7F00FF?style=for-the-badge&logo=arduino&logoColor=white" />
  <img src="https://img.shields.io/badge/OpenCV-Image_Processing-FF1493?style=for-the-badge&logo=opencv&logoColor=white" />
  <img src="https://img.shields.io/badge/Serial_Comm-9600_Baud-F27C00?style=for-the-badge" />
</p>

---

## 🎯 <span style="color:#00E6E6;">Key Features</span>
- 🚦 Real-time **RED / GREEN** traffic signal detection  
- 📡 Sends `"RED"` or `"GREEN"` to Arduino using Serial @ 9600 baud  
- 🤖 Perfect for **autonomous cars**, **lane followers**, **IRoC-U bots**  
- ⚡ Optimized for ESP32-CAM (OV2640) with fast color  
- 🔌 Easy integration with any Arduino motor driver  

---

## 🔌 <span style="color:#FF1493;">Hardware Connections</span>

| ESP32-CAM Pin | Arduino Pin |
|---------------|-------------|
| **TX**        | **RX**      |
| **GND**       | **GND**     |
| **5V**        | **5V**      |

> Baud Rate: **9600**

---

## 🚀 <span style="color:#00FFFF;">Getting Started</span>

### 1️⃣ Clone the Project
```bash
git clone https://github.com/yourusername/ESP32-CAM-Traffic-Signal-Detection.git
cd ESP32-CAM-Traffic-Signal-Detection
```

### 2️⃣ Open in Arduino IDE
- Select board: **AI Thinker ESP32-CAM**  
- Connect via FTDI  
- Upload the `.ino` file  

### 3️⃣ Run the System
- Show **red** or **green** light to the ESP32-CAM  
- It will send:
  - `"RED"` → Stop  
  - `"GREEN"` → Go  

---

## 📁 <span style="color:#7F00FF;">Project Structure</span>

```text
ESP32-CAM-Traffic-Signal-Detection/
│
└── ESP32_CAM_Traffic_Signal.ino   # Main detection + serial output file
```

---

## 📸 <span style="color:#00FFFF;">System Workflow</span>
- 📷 ESP32-CAM captures image frames  
- 🎨 Color segmentation detects RED / GREEN regions  
- 🧠 Decision logic interprets the signal  
- 📡 Serial output sent to Arduino  
- 🚗 Arduino performs motor actions according to the other instrucutions 

---

## 🧪 <span style="color:#FF1493;">Example Outputs</span>
- 🟥 Detected: **RED** → Serial prints `"RED"`  
- 🟩 Detected: **GREEN** → Serial prints `"GREEN"`  
- 🤖 Arduino can stop, go, or modify the robot state  

> *(You can add demo images or GIFs here)*

---

## 🤝 <span style="color:#00E6E6;">Contributing</span>
Feel free to enhance the project by adding:

- Yellow light detection  
- ML-based detection (YOLO / MobileNet)  
- WiFi video streaming overlay  
- Multi-signal support  

Pull requests are welcome!

---

## 🏷️ <span style="color:#7F00FF;">License</span>
Licensed under the **MIT License** — free to use and modify.

---

<div align="center">
  <p style="color:#CFCFCF;"><b>⚡ Minimal. Neon. Fast. Built for Autonomous Robotics.</b></p>
</div>
