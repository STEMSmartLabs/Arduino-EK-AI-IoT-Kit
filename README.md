# Arduino AI/IoT Kit  
_Discover the Inventor in You_

![Made in India](https://img.shields.io/badge/Origin-Made%20in%20India-orange)

![Arduino EK Experiment AI and IoT Kit](https://shop.stemsmartlabs.com/wp-content/uploads/2025/07/AI-IoT_board.jpg)
 

A next-generation learning platform to get started with Artificial Intelligence (AI) and Machine Learning (ML) using real sensor data and practical projects.

---

## Table of Contents

1. [Overview](#overview)  
2. [What Is the Arduino AI/IoT Kit?](#what-is-the-arduino-aiiot-kit)  
3. [Introduction to Machine Learning with Arduino](#introduction-to-machine-learning-with-arduino)  
4. [Key Concepts in ML](#key-concepts-in-ml)  
5. [Common Use Cases](#common-use-cases)  
6. [Arduino and ML Integration](#arduino-and-ml-integration)  
7. [Example Applications](#example-applications)  
8. [Gesture Recognition Example](#gesture-recognition-example)  
   - [Requirements](#requirements)  
   - [Option 1: Train Your Own Model](#option-1-train-your-own-model)  
   - [Option 2: Use the Pre-Trained Model](#option-2-use-the-pre-trained-model)  
   - [How It Works](#how-it-works)  
9. [Setting Up Arduino IoT Cloud](#setting-up-arduino-iot-cloud)  
   - [Create / Log In](#create--log-in)  
   - [Install Arduino Create Agent](#install-arduino-create-agent)  
   - [Add Your Device](#add-your-device)  
   - [Create a “Thing” & Define Variables](#create-a-thing--define-variables)  
10. [Building Your First IoT Dashboard](#building-your-first-iot-dashboard)  
11. [Integrating AI + IoT](#integrating-ai--iot)  
    - [Workflow](#workflow)  
    - [Sample Use Case – Sound Detection Model](#sample-use-case--sound-detection-model)  
12. [Mobile App Control](#mobile-app-control)  
13. [What’s in the Box?](#whats-in-the-box)  
14. [License](#license)  
15. [Contact](#contact)  

---

## Overview

The **Arduino AI/IoT Kit** is designed to help you get started with AI and Machine Learning using the Arduino Ek R4 WiFi and a suite of onboard & Grove-compatible sensors. It supports both on-device (TinyML) inference and cloud-based AI integrations, enabling low-latency edge projects as well as remote monitoring and control.

---

## What Is the Arduino AI/IoT Kit?

The Arduino AI/IoT Kit is a next-generation learning platform that introduces students and enthusiasts to AI and ML through hands-on experiments and real sensor data. It’s built around the Arduino Ek R4 WiFi board and includes everything you need to explore TinyML and cloud-connected applications.

---

## Introduction to Machine Learning with Arduino

Artificial Intelligence (AI), and specifically Machine Learning (ML), lets devices “learn” patterns from data instead of relying solely on pre-programmed logic. With ML on Arduino, you can train models on datasets and run inference—recognizing gestures, classifying sounds, or detecting anomalies—directly on the board or in the cloud.

---

## Key Concepts in ML

- **Training**: Teaching a model using a labeled dataset.  
- **Inference**: Using a trained model to make predictions on new data.  
- **Features**: Attributes or patterns extracted from raw sensor readings.  
- **Models**: Mathematical representations of learned patterns.

---

## Common Use Cases

- **Gesture Recognition**: Detect specific movements via accelerometer data.  
- **Sound Classification**: Identify claps, voice commands, barking, etc.  
- **Anomaly Detection**: Spot unusual patterns in environmental or system data.

---

## Arduino and ML Integration

1. **Data Collection**: Capture sensor data on the Arduino.  
2. **Model Training**: Use platforms like Edge Impulse to train and optimize TinyML models.  
3. **Export & Deploy**: Generate an Arduino library from your trained model and include it in your sketch.  
4. **Inference**: Run real-time predictions on the board or push data to cloud AI services for advanced processing.

---

## Example Applications

- **Voice-Controlled Projects**: Speech recognition to drive actions on Arduino.  
- **Predictive Systems**: Analyze sensor streams for forecasting (e.g., weather).  
- **Interactive Displays**: Generate dynamic content for OLEDs or web dashboards.

---

## Gesture Recognition Example

![Gesture Recognition Example](https://shop.stemsmartlabs.com/wp-content/uploads/2025/07/wifi_board_accelerometer.jpg)
 

An end-to-end project showing how to recognize hand gestures with TinyML.

### Requirements

- Arduino AI/IoT Kit  
- USB-C® Cable  
- Edge Impulse Arduino Library

### Option 1: Train Your Own Model

1. **Collect Data**  
   - Record accelerometer readings in Edge Impulse’s Data Acquisition tool.  
2. **Train Model**  
   - Define classes (circle, up-down, left-right) and train on your dataset.  
3. **Export Library**  
   - Generate an Arduino library (.zip) from Edge Impulse.  
4. **Deploy**  
   - Add the .zip via **Sketch → Add .ZIP Library…** and include it in your code.

### Option 2: Use the Pre-Trained Model

1. **Download** our pre-trained library (including `movement_model.zip`) from this repo.
2. **Install** via **Sketch → Include Library → Add .ZIP Library…**.
3. **Include** it in your sketch and upload.

### How It Works

- Reads live accelerometer data.  
- Converts raw readings into feature vectors.  
- Runs inference with the TinyML model.  
- Outputs gesture predictions to the Serial Monitor for integration into your projects.

---

## Setting Up Arduino IoT Cloud

Objective: Connect your kit to Arduino IoT Cloud for remote data logging & device management.

### Create / Log In

1. Go to [Arduino IoT Cloud](https://cloud.arduino.cc/) and sign in with your Arduino ID.  
2. Install the desktop **Arduino Create Agent** when prompted.

### Add Your Device

1. Click **+ Add Device → Arduino → UNO R4 WiFi**.  
2. Follow the wizard to register your board and enter WiFi credentials.

### Create a “Thing” & Define Variables

A “Thing” is the digital twin of your board. Define variables for each sensor/actuator, e.g.:  
- temperature  
- humidity  
- LED  
- NeoPixel  
- Servo Motor  
- Switch

---

## Building Your First IoT Dashboard

1. Open the **Dashboard** tab and **Create Dashboard**.  
2. Add widgets: **Gauges**, **Graphs**, **Switches**, **Text Labels**.  
3. Bind widgets to your cloud variables.  
4. Monitor live data via web or the Arduino IoT Remote mobile app.  
5. **Automate Actions**: e.g., turn on a fan widget when `temperature > 30 °C`.

---

## Integrating AI + IoT

Objective: Combine TinyML inference with cloud connectivity.

### Workflow

1. **Train** ML model on Edge Impulse.  
2. **Deploy** to UNO R4 WiFi.  
3. **Infer** locally and push predictions to cloud variables.  
4. **Visualize** results on your IoT dashboard.

### Sample Use Case – Sound Detection Model

- **Sensor**: Grove Microphone  
- **Classes**: Barking, Clapping, Silence  
- **Action**: Display detected class on dashboard and send a push notification when “Barking” persists > 3 s.

---

## Mobile App Control

Manage your kit from your phone:

1. Install **Arduino IoT Remote** (iOS & Android).  
2. Sign in with your Arduino ID.  
3. Control outputs (fan, LEDs, servo) and view live sensor & ML data on the go.

---

## What’s in the Box?

- **Arduino® Ek R4 WiFi**  
- NeoPixel 8-LED Ring  
- Micro-Servo Motor & PWM Fan  
- Ultrasonic Module  
- Humidity & Temperature Sensor  
- IR Receiver & IR Remote  
- LDR Module & Potentiometer  
- Buzzer, Push-Button & Rocker Switch  
- 4 Grove-style Ports & Breadboard Wires  
- USB-C Cable & 9 V Battery Holder  
- Breadboard  
- Grove Sound & Vibration Sensors  
- Accelerometer

---

## License

This project is released under the [MIT License](LICENSE).

---

## Contact

Made in India by **STEM Smart Labs**  
- 🌐 https://stemsmartlabs.com  
- ✉️ hello@stemsmartlabs.com  
