# Arduino AI/IoT Kit  
_Discover the Inventor in You_

![Made in India](https://img.shields.io/badge/Origin-Made%20in%20India-orange)

![Arduino EK Experiment AI and IoT Kit](https://shop.stemsmartlabs.com/wp-content/uploads/2025/07/AI-IoT_board_label_new.jpg)
 

A next-generation learning platform to get started with Artificial Intelligence (AI) and Machine Learning (ML) using real sensor data and practical projects.

---

## Demo Program:

**A built-in demo program runs automatically on the kit, showcasing the functionality of each module.**

You can navigate through the different demo examples using the **arrow keys** on the **IR remote**, and select a demo by pressing the **OK button**.

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


## Mobile App Control

Manage your kit from your phone:

1. Install **Arduino IoT Remote** (iOS & Android).  
2. Sign in with your Arduino ID.  
3. Control outputs (fan, LEDs, servo) and view live sensor & ML data on the go.

---
## Setting Up Arduino AI 

**Install the Arduino AI IoT Kit Library and Dependencies**

Before starting with your projects, make sure you have the **Arduino IDE** installed and set up properly.

## Install Arduino IDE

If you don’t already have the Arduino IDE:

1. Download it from the official site: <https://www.arduino.cc/en/software>
2. Follow the installation instructions for your platform (Windows/macOS/Linux)

Need help? Watch this step-by-step tutorial:  
[Watch: How to Install Arduino IDE](https://www.youtube.com/watch?v=7h_KRz9gVKc&list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG&index=1&pp=iAQB)

## Install the AI IoT Kit Library (ZIP)

To get started with the AI & IoT projects, you need to install the custom library provided in our GitHub repository. Follow the steps below:

## Download the Library

1. Visit our GitHub repository:  
    <https://github.com/STEMSmartLabs/Arduino-EK-AI-IoT-Kit>
2. Click on the green **“Code”** button and select **“Download ZIP”**.

## Add the Library to Arduino IDE

1. Open the **Arduino IDE**.
2. Go to **Sketch** → **Include Library** → **Add .ZIP Library…**
3. Select the ZIP file you just downloaded.

This will install all necessary examples, demo and module code for using the AI & IoT Kit.

## Install Required Libraries via Library Manager

Open Arduino IDE and go to:  
**Sketch** → **Include Library** → **Manage Libraries…**

In the Library Manager, search for and install the following:

| **Library Name** | **Notes** |
| --- | --- |
| **Adafruit SSD1306** | For OLED Display |
| **IRremote** | For IR sensor/remote handling |
| **Servo** | For controlling servo motor |
| **Adafruit NeoPixel** | For RGB LED animations |
| **DHT sensor library (Kxn)** | For temperature & humidity sensor |
| **RTClib** | For real-time clock module |

Watch the step-by-step video tutorial here:  
<https://youtu.be/NynkjxE_f0E>

## Kit Modules – Examples & Video Tutorials

Each module in the **Arduino EK AI & IoT Kit** is supported by a dedicated .ino example file and a video tutorial to help you understand its functionality and how to use it in real-world applications.

You can access all module examples directly from the Arduino IDE:  
**File** → **Examples** → **Arduino-EK-AI-IoT-Kit** → **examples** → **sensors**

Click on the video link next to each module in the table below to watch a step-by-step demonstration.

| **Module Name** | **Description** | **Code Example** | **Video Link** |
| --- | --- | --- | --- |
| **Servo** | Moves servo motor to desired angles | Servo.ino | [Watch Video](https://youtu.be/mvdJesc4Bp0?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **NeoPixel** | Displays colorful LED animations | NeoPixel.ino | [Watch Video](https://youtu.be/aflbNHTgnTw?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **Fan** | Controls DC fan speed or on/off state | Fan.ino | [Watch Video](https://youtu.be/-V036wOBVBQ?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **DHT** | Reads temperature and humidity values | DHT.ino | [Watch Video](https://youtu.be/yxTLp2EgEgY?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **LED** | Blinks and controls external LEDs | LED.ino | [Watch Video](https://youtu.be/9pjA6bSlIlE?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **IR Remote** | Receives signals from an IR remote | IR.ino | [Watch Video](https://youtu.be/oqgKEzpTiyU?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **OLED** | Displays text and graphics on screen | OLED.ino | [Watch Video](https://youtu.be/qHU3qu7oAQo?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **LDR** | Detects ambient light intensity | LDR.ino | [Watch Video](https://youtu.be/DFxrTkIoJ8g?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **Ultrasonic** | Measures distance using sound waves | Ultrasonic.ino | [Watch Video](https://youtu.be/QnRZb2g8Dv8?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **Buzzer** | Produces tones and sound alerts | Buzzer.ino | [Watch Video](https://youtu.be/gbFjNumvReE?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **Button** | Detects push button press | Button.ino | [Watch Video](https://youtu.be/XIhvD9RvUtk?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **Switch** | Reads toggle switch on/off state | Switch.ino | [Watch Video](https://youtu.be/XIhvD9RvUtk?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |
| **TrimPOT** | Reads analog value from potentiometer | TrimPOT.ino | [Watch Video](https://youtu.be/jsoSBXgQ93w?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG) |

## External Grove Ports:

The **Arduino EK AI & IoT Kit** offers **External Grove Ports** that make it easy to connect additional sensors and modules. We also support breadboarding via external port. This enables users to go beyond the pre-mounted components and experiment with new ideas, custom circuits, or external I2C devices.

## What You Can Do:

- Connect sensors not included in the main kit
- Prototype with breadboards while using Grove connectors
- Access **I2C communication** through the Grove expansion ports
- Extend functionality using jumper wires and custom circuits

## Watch the Tutorial

Learn how to use external Grove ports with a breadboard and connect an accelerometer in this hands-on video:

[Watch Video](https://youtu.be/37e9Oa_igdk?list=PL_NAQ0cj_VWI-FwRrFVTtYNqDVCF2LvEG)

## Real-World Applications & Projects

Explore exciting hands-on projects categorized by real-world domains. Each project comes with working .ino files, and some include video tutorials for deeper understanding.

**Home Automation**

Projects that automate your living space using sensors and actuators.  
Build smart fans, curtain systems, door locks, and appliance controllers using IR remotes, RFID modules, and sensors.

**Interactive Games**

Fun, interactive ways to learn electronics and logic.  
Use buttons, sensors, and OLEDs to build games, elevator simulators, and people counters that respond to user interaction.

**Assistive Technology**

Create solutions that assist the differently-abled or elderly.  
Automate doors, lights, or devices using simple input methods to support independent and safe living.

**Clocks and Scientific Tools**

Build tools inspired by lab setups and scientific instruments.  
Projects include timers, counters, and measurement displays to understand physics and data logging.

**Environmental Monitoring**

Track changes in your surroundings using smart sensors.  
Build systems that detect temperature, humidity, and light to trigger automatic lighting or alert systems.

**Interactive Display**

Projects that use the OLED or similar displays for real-time visual feedback.  
Display sensor values, animations, messages, or system status to bring projects to life.

## Featured Project Videos
| **Project Title** | **Description / Highlights** | **Project Code** | **Video Link** |
| --- | --- | --- | --- |
| **Tic Tac Toe Game on Arduino EK R4** | Playable Tic Tac Toe using IR Remote & OLED Display | [View Code](https://github.com/STEMSmartLabs/Arduino-EK-AI-IoT-Kit/blob/main/examples/applications/Games/tic_tac_toe/tic_tac_toe.ino) | [Watch Video](https://youtu.be/4XrE3T21CvA?list=PL_NAQ0cj_VWJGEcv7IAwLWgFyA2s_rXrA) |
| **Arcade Cyclone Game with Arduino EK R4** | Fast-reaction LED ring game with NeoPixel + Buzzer | [View Code](https://github.com/STEMSmartLabs/Arduino-EK-AI-IoT-Kit/tree/main/examples/applications/Games/arcade_cyclone) | [Watch Video](https://youtu.be/DR1ks8xgdQE?list=PL_NAQ0cj_VWJGEcv7IAwLWgFyA2s_rXrA) |
| **Smart Parking Assist System with Arduino EK R4** | Ultrasonic sensor + NeoPixel + Buzzer to guide parking | [View Code](https://github.com/STEMSmartLabs/Arduino-EK-AI-IoT-Kit/blob/main/examples/applications/Assistive%20Technology/parking_assist/parking_assist.ino) | [Watch Video](https://youtu.be/9raalE5PwAM?list=PL_NAQ0cj_VWJGEcv7IAwLWgFyA2s_rXrA) |
| **Musical Keyboard with IR Remote** | IR remote as keyboard, buzzer for tones | [View Code](https://github.com/STEMSmartLabs/Arduino-EK-AI-IoT-Kit/blob/main/examples/applications/Games/IR_keyboard/IR_keyboard.ino) | [Watch Video](https://youtu.be/FPQu9rpY4O8?list=PL_NAQ0cj_VWJGEcv7IAwLWgFyA2s_rXrA) |
| **Tile Tower Game with Arduino EK R4** | OLED-based stacking game testing speed & timing | [View Code](https://github.com/STEMSmartLabs/Arduino-EK-AI-IoT-Kit/blob/main/examples/applications/Games/tile_tower/tile_tower.ino) | [Watch Video](https://youtu.be/5Y-gn9RKH18?list=PL_NAQ0cj_VWJGEcv7IAwLWgFyA2s_rXrA) |
| **Smart Lock System using IR Remote, OLED, Servo, and Buzzer** | IR-based access control system with feedback mechanisms | [View Code](https://github.com/STEMSmartLabs/Arduino-EK-AI-IoT-Kit/blob/main/examples/applications/Home%20Automation/IR_remote_lock/IR_remote_lock.ino) | [Watch Video](https://youtu.be/CuWeehWU5jA?list=PL_NAQ0cj_VWJGEcv7IAwLWgFyA2s_rXrA) |

---

## License

This project is released under the MIT License.

---

## Contact

Made in India by **STEM Smart Labs**  
- 🌐 https://stemsmartlabs.com  
- ✉️ hello@stemsmartlabs.com  


---

## License

This project is released under the [MIT License](LICENSE).

---

## Contact

Made in India by **STEM Smart Labs**  
- 🌐 https://stemsmartlabs.com  
- ✉️ hello@stemsmartlabs.com  
