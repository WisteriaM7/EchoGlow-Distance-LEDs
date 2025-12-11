# 🚀 Arduino Ultrasonic Sensor HC-SR04 - Distance Measurement with LEDs

## 🎯 Overview
This project uses an **HC-SR04 Ultrasonic Sensor** to measure distance and visually indicate the range using **LEDs**. The sensor calculates the distance by sending ultrasonic pulses and measuring the time it takes for them to return. Different LEDs turn on depending on how close an object is to the sensor.

---

## 📌 Components Required
- **Arduino Board** 🎛️
- **HC-SR04 Ultrasonic Sensor** 🎯
- **5 LEDs** 💡
- **Jumper Wires** 🔌
- **Breadboard** 🔬

---
## 🎯 Circuit Diagram

![Arduino Uno Circuit Diagram](https://github.com/WisteriaM7/EchoGlow-Distance-LEDs/blob/main/FJPX0MDKDFYHO7Z.jpg)

---
## ⚡ Wiring Diagram
| Component | Arduino Pin |
|-----------|------------|
| Trig Pin  | 12         |
| Echo Pin  | 13         |
| LED 1     | 8          |
| LED 2     | 7          |
| LED 3     | 6          |
| LED 4     | 5          |
| LED 5     | 4          |

---

## 📝 Code Explanation
### 1️⃣ Pin Initialization
- The **HC-SR04** sensor uses two pins:
  - `trig` (Trigger) - Sends an ultrasonic pulse
  - `echo` (Echo) - Receives the reflected pulse
- Five **LEDs** are connected to digital pins.

### 2️⃣ Distance Calculation
- The **trigger pin** is set HIGH for **1000µs** to send an ultrasonic pulse.
- The **pulse duration** is measured using `pulseIn(echo, HIGH)`.
- Distance is calculated using the formula:
  ```cpp
  distance = (duration / 2) / 28.5;
  ```
  - The divisor **28.5** converts the time into centimeters.

### 3️⃣ LED Activation Based on Distance
- The LEDs turn on based on distance thresholds:
  - **≤10 cm** → LED 1 ON
  - **≤20 cm** → LED 2 ON
  - **≤30 cm** → LED 3 ON
  - **≤40 cm** → LED 4 ON
  - **≤50 cm** → LED 5 ON
- LEDs turn OFF if the distance is greater than the respective threshold.

---

## 📦 Dependencies
Ensure you have the **Arduino IDE** installed:
🔗 [Download Arduino IDE](https://www.arduino.cc/en/software)

---

## ▶️ Uploading the Code
1. Open the **Arduino IDE**.
2. Copy and paste the provided code.
3. Select the correct **Board** and **COM Port**.
4. Click the **Upload** button 🚀.
5. Open the **Serial Monitor** to see distance readings in real-time.

---

## 🌟 Potential Improvements
✅ Implement a **buzzer** to provide an audio alert 📢.
✅ Use an **LCD display** to show real-time distance 📟.
✅ Optimize distance calculation for **better accuracy** 🎯.
✅ Integrate with **IoT** for remote monitoring 📡.

---

## 🎯 Conclusion
This project effectively demonstrates how an **HC-SR04 ultrasonic sensor** can be used to measure distance and provide **visual feedback using LEDs**. It’s an excellent starting point for projects involving obstacle detection, parking assistance, or smart distance monitoring.

🔧 **Happy Making!** 🔧
