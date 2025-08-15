# Arduino Neo Inventor Kit — Arduino IoT Cloud Template Import Guide

This README explains how to import the **`Arduino Neo Inventor Kit Template.tino`** file into **Arduino IoT Cloud** and get your board online with a ready-made Thing, variables, and dashboard widgets.

---

## Prerequisites

- Arduino account and access to **Arduino IoT Cloud**
- **Arduino UNO R4 WiFi** (or another Cloud-compatible board)
- **Arduino Create Agent** (Cloud Agent) installed and running on your computer
- The file: **`Arduino Neo Inventor Kit Template.tino`** (from this repository)

> **Tip:** If you’ll flash sketches from the browser, connect your board via USB and keep the Cloud Agent running.

---

## 1) Import the `.tino` template

1. Sign in to **Arduino Cloud** and open **IoT Cloud**.
2. Go to **Things**.
3. Click **Create Thing** → **Import from file (.tino)**.  
   - If you don’t see this, click **Create Thing** → **More options** (⋯) → **Import**.
4. Select **`Arduino Neo Inventor Kit Template.tino`** and confirm.
5. A new **Thing** will appear with pre-configured variables.

---

## 2) Link your device

1. Inside the new Thing, find **Associated Device** and click **Select device**.
2. Choose your **UNO R4 WiFi** (or add it if prompted).
3. Save the Thing.

---

## 3) Check variables & permissions

The template includes Cloud variables (e.g., sensor readings and actuator controls). Verify:
- **Type** (e.g., `float`, `int`, `bool`)
- **Permission** (e.g., `Read Only` for sensors, `Read & Write` for actuators)
- **Update policy** (on change / periodically)

> Adjust only if you know what you’re changing.

---

## 4) Network credentials (Secrets)

If the generated sketch expects Wi-Fi credentials:
1. Open the **Thing** → **Secrets** (key icon).
2. Enter your **Wi-Fi SSID** and **Password** (or whatever secrets the sketch uses).

---

## 5) Open/attach the sketch & upload

1. In the Thing, click **Sketch** to open the auto-generated sketch (or attach the provided one if the template includes it).
2. Click **Verify** then **Upload** to flash your board.
3. After uploading, the Thing should connect; you’ll see **Last Value** updating for variables.

---

## 6) Create a dashboard (optional but recommended)

1. Go to **Dashboards** → **Build dashboard**.
2. Click **Add** → **Thing** and select your imported Thing.
3. Drag widgets (Gauge, Switch, Chart, etc.) and **bind** them to the Thing variables.
4. Click **Done** and view your live data and controls.

---

## Common issues & fixes

- **“Import failed” or no Import button**  
  Update the **Cloud Agent** and retry. Ensure you’re in **IoT Cloud → Things**.
- **Device not listed**  
  Plug in via USB, allow browser permissions, and add the board under **Devices**.
- **Sketch compiles but won’t connect**  
  Recheck Wi-Fi **Secrets**, SSID/password, and that your network allows 2.4 GHz.
- **Variables not updating**  
  Confirm variable **permissions** and that your sketch publishes/reads the right names.

---

## What’s included in the template

- **Thing configuration** for the Neo Inventor Kit (variables for sensors/actuators)
- **Starter sketch** (if bundled by the template)
- Suggested variable names, for example:
  ```text
  Message:  String message;
  Neopixel: CloudColoredLight neopixel;
  ServoAngle: int servoAngle;
  Temperature: int temperature;
  Ultrasonic: int ultrasonic;
