<!-- 🚦 ESP32-CAM Traffic Signal Detection README -->

![Header](https://media.licdn.com/dms/image/v2/D5616AQHTmzZugNIZwg/profile-displaybackgroundimage-shrink_350_1400/profile-displaybackgroundimage-shrink_350_1400/0/1698503282936?e=1764201600&v=beta&t=lBHUddveFzDJextahViAM5lgR-3GnMlmi3HkrjX-jhk)

<h1 align="center">🚦 ESP32-CAM Traffic Signal Detection</h1>
<h3 align="center">AI-powered RED/GREEN detection with Serial Output to Arduino 🚗⚡</h3>

<p align="center">
  <img src="https://i.pinimg.com/originals/68/12/7a/68127a4f7cf8c61a0b697b7a4f1a3e0c.gif" width="800"/>
</p>

---

## 🧠 Project Overview
> A lightweight vision-based traffic signal detection system  
> built using **ESP32-CAM (OV2640)** that identifies **RED** and **GREEN** lights  
> and sends commands to an **Arduino** for autonomous robot control.

- 🟥 Detects **RED** → Robot stops  
- 🟩 Detects **GREEN** → Robot moves  
- 📡 Sends signals via **Serial (9600 baud)**  
- 🚗 Works with any Arduino-powered robot (lane following, obstacle avoidance, etc.)

---

## 🛠️ Hardware Requirements
- 📷 ESP32-CAM (AI Thinker)  
- 🔌 FTDI Programmer  
- 🤖 Arduino UNO / Mega  
- ⚙️ Motor Driver (L298N / TB6612)  
- 🪫 5V Power Source / Battery  
- 🔧 Jumper Wires  

---

## 🔌 Wiring (ESP32-CAM → Arduino)

| ESP32-CAM | Arduino |
|----------|----------|
| **TX**   | **RX**   |
| **GND**  | **GND**  |
| **5V**   | **5V**   |

> Baud Rate: **9600**

---

## 🚀 Features
- Real-time RED/GREEN detection  
- Ultra-fast color processing  
- No cloud or PC required  
- Fully compatible with Arduino bots  
- Perfect for **Autonomous Vehicles / IRoC-U Projects**

---

## 📁 File Included
```
ESP32_CAM_Traffic_Signal.ino
```

This file contains the entire detection + serial communication logic.

---

## ▶️ How to Use
1. Open the `.ino` file in Arduino IDE  
2. Select board: **AI Thinker ESP32-CAM**  
3. Connect FTDI and upload  
4. Power the ESP32-CAM  
5. Place RED/GREEN traffic lights in front of camera  
6. Output via Serial:  
   - `"RED"` → Stop  
   - `"GREEN"` → Go  

---

## 🪄 Future Enhancements
- Add Yellow signal detection  
- Add WiFi video streaming with overlays  
- YOLO/MobileNet-based advanced detection  
- Multi-signal intersection handling  

---

## 📸 Preview (Optional)
<p align="center">
  <img src="https://i.gifer.com/WS2p.gif" width="300">
</p>

---

## 🧵 Related Projects by Me
- 🧭 Autonomous Car through Lane Detection  
- 🖱️ Hand Gesture Mouse using OpenCV  
- 🚘 Tesla Website UI Clone  
- 🧵 AI-Based Fabric Defect Detection (PNMFD Model)

---

## 💬 Quote
> *“Automation becomes magic when vision meets logic.”* ✨

---

<p align="center">
  <img src="https://komarev.com/ghpvc/?username=sir-dragmaster-j&label=README+VIEWS&color=8A2BE2&style=for-the-badge" />
</p>

<p align="center">
  <img src="https://i.gifer.com/origin/da/da203e3f0a87b4d00bb251a25e3cdd8c_w200.gif" width="80">
</p>

![Footer](https://capsule-render.vercel.app/api?type=waving&color=8A2BE2&height=120&section=footer)

---

⭐ **If this README helped you, drop a star!**  
💜 *Made by Sujay J using ESP32-CAM magic*
