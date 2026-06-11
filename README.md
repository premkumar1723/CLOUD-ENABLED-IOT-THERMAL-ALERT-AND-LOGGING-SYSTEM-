# 🌡️ Cloud-Enabled IoT Thermal Alert and Logging System

![Embedded Systems](https://img.shields.io/badge/Embedded%20Systems-LPC2148-blue)
![IoT](https://img.shields.io/badge/IoT-ThingSpeak-green)
![Language](https://img.shields.io/badge/Language-Embedded%20C-orange)
![Status](https://img.shields.io/badge/Status-Completed-success)

## 📖 Project Overview

The **Cloud-Enabled IoT Thermal Alert and Logging System** is an Embedded IoT solution designed to continuously monitor temperature, upload real-time data to the cloud, and generate alerts whenever the temperature exceeds a predefined threshold.

The system uses an **LPC2148 ARM7 Microcontroller**, **LM35 Temperature Sensor**, and **ESP01 Wi-Fi Module** to provide both local and remote monitoring capabilities.

---

## 🎯 Objective

Develop an IoT-based thermal monitoring system that:

✅ Continuously measures temperature

✅ Logs temperature data to the cloud

✅ Generates overheating alerts

✅ Supports local and remote threshold updates

✅ Retains configuration during power failures using EEPROM

---

## ✨ Features

- 🌡️ Real-time Temperature Monitoring
- ☁️ Cloud Data Logging using ThingSpeak
- 📊 Live Temperature Visualization
- 🔔 Over-Temperature Alert Generation
- 📟 LCD Display Interface
- ⌨️ Local Setpoint Configuration via Keypad
- 🌐 Remote Setpoint Configuration via Cloud
- 💾 EEPROM-Based Data Storage
- 🚨 Buzzer Alert for Thermal Threshold Violation
- 🔄 Automatic Recovery after Power Failure

---

## 🛠️ Hardware Components

| Component | Description |
|------------|------------|
| 🧠 LPC2148 | ARM7 Microcontroller |
| 🌡️ LM35 | Temperature Sensor |
| 💾 AT24C256 | EEPROM |
| 📶 ESP01 | Wi-Fi Module |
| ⌨️ 4x4 Matrix Keypad | User Input |
| 📟 LCD | Display Unit |
| 🚨 Buzzer | Alert Device |
| 🔘 Switch | External Interrupt |
| 🔌 USB-UART | Programming & Debugging |

---

## 💻 Software Requirements

- 🧑‍💻 Keil uVision
- 🔧 Embedded C
- ⚡ Flash Magic
- ☁️ ThingSpeak Cloud Platform

---

## 🏗️ System Architecture

```text
        🌡️ LM35 Sensor
                |
                v
        🧠 LPC2148 MCU
         /    |     \
        /     |      \
       v      v       v
   📟 LCD  💾 EEPROM 🚨 Buzzer
               |
               v
          📶 ESP01 Wi-Fi
               |
               v
        ☁️ ThingSpeak Cloud
```

---

## ⚙️ Working Principle

### 1️⃣ Temperature Acquisition

- LM35 continuously senses ambient temperature.
- LPC2148 reads temperature through ADC channels.

### 2️⃣ Local Monitoring

- Current temperature is displayed on LCD.
- System compares temperature with stored setpoint.

### 3️⃣ Cloud Logging

- Temperature data is uploaded periodically to ThingSpeak.
- Historical data can be viewed remotely.

### 4️⃣ Alert Generation

When:

```text
Current Temperature > Setpoint
```

The system:

- 🚨 Activates Buzzer
- ☁️ Sends Alert Data to Cloud
- 📟 Displays Warning Status

### 5️⃣ Setpoint Management

#### Local Update

- User presses interrupt switch.
- New setpoint entered through keypad.
- Updated value stored in EEPROM.

#### Remote Update

- User updates setpoint via ThingSpeak.
- LPC2148 periodically checks cloud.
- If new value exists:
  - EEPROM updated
  - New threshold activated

### 6️⃣ Power Failure Protection

EEPROM stores:

- Current Setpoint
- User Configuration

After restart:

- Setpoint is automatically restored.

---

## 🔄 Project Flow

```text
Start
  ↓
Initialize Peripherals
  ↓
Read Setpoint from EEPROM
  ↓
Read Temperature
  ↓
Display on LCD
  ↓
Upload to ThingSpeak
  ↓
Compare with Setpoint
  ↓
Temperature > Setpoint ?
      ↓
   Yes → Activate Buzzer
      ↓
 Send Alert to Cloud
      ↓
Check Setpoint Updates
      ↓
Update EEPROM if Needed
      ↓
Repeat
```

---

## ☁️ Cloud Integration

### 📊 Temperature Channel

Stores:

- Current Temperature
- Historical Temperature Data

### 🚨 Alert Channel

Stores:

- Overheating Events
- Alert Status

### ⚙️ Setpoint Channel

Used for:

- Remote Threshold Configuration
- Remote Device Management

---

## 📂 Project Structure

```text
Cloud-IoT-Thermal-Alert-System/
│
├── main.c
├── lcd.c
├── lcd.h
├── keypad.c
├── keypad.h
├── delay.c
├── delay.h
├── eeprom.c
├── eeprom.h
├── esp01.c
├── esp01.h
├── adc.c
├── adc.h
│
├── README.md
├── Circuit_Diagram.png
├── Block_Diagram.png
├── Project_Report.pdf
│
└── Screenshots/
    ├── ThingSpeak_Dashboard.png
    └── Output_Images.png
```

---

## 🚀 Applications

### 🏭 Industrial Monitoring

Monitor machinery and equipment temperatures.

### 🖥️ Server Rooms

Detect overheating before hardware damage.

### ⚡ Electrical Systems

Monitor transformers and power equipment.

### 🧪 Laboratories

Protect temperature-sensitive experiments.

### 🏠 Smart Buildings

Enable automated thermal safety monitoring.

---

## 🔮 Future Enhancements

- 📱 Mobile Application
- 📧 Email Alerts
- 📩 SMS Notifications
- 📡 MQTT Protocol Support
- 🤖 AI-Based Predictive Maintenance
- 📈 Advanced Analytics Dashboard
- 🌐 Multi-Sensor Monitoring
- 🔋 Battery Backup Support

---

## 📸 Project Demonstration

### Hardware Setup

📷 Add hardware images here

### ThingSpeak Dashboard

📷 Add cloud dashboard screenshots here

### LCD Output

📷 Add output screenshots here

---

## 🏆 Learning Outcomes

✔ Embedded C Programming

✔ LPC2148 Peripheral Interfacing

✔ UART Communication

✔ ADC Programming

✔ EEPROM Interfacing

✔ External Interrupts

✔ ESP01 Driver Development

✔ Cloud Integration

✔ IoT Application Development

---

## 👨‍💻 Author

### Prem Kumar Gaddam

🎓 Embedded Systems Engineer

💡 Passionate about Embedded Systems, IoT, Firmware Development, and Automotive Technologies.

---

## ⭐ Support

If you found this project useful:

⭐ Star this repository

🍴 Fork this repository

📢 Share with others

---

## 📜 License

This project is developed for educational and learning purposes.

© 2026 Prem Kumar Gaddam
