# 🌡️ Climate Control Module (Arduino-Based)

An Arduino Uno-based climate control system that continuously monitors ambient temperature and automatically regulates a DC cooling fan's speed using PWM (Pulse Width Modulation). The project was designed and simulated on **Tinkercad Circuits**.

## 📋 Overview

This module reads real-time temperature data from a **TMP36 temperature sensor** and dynamically controls a **DC motor (cooling fan)** based on the temperature range. It's a simple, low-cost proof-of-concept for automated thermal management systems — useful in applications like room cooling, server rack ventilation, or embedded HVAC prototypes.

## ✨ Features

- Real-time temperature monitoring via TMP36 sensor
- Automatic PWM-based fan speed control
- Three-stage fan behavior:
  - **Off** below 27°C
  - **Linearly increasing speed** between 27°C and 40°C
  - **Maximum speed** at 40°C and above
- Live serial output of temperature and PWM values every 500 ms
- Fully simulated and tested in Tinkercad before physical deployment

## 🔧 Components Used

| Component | Purpose |
|---|---|
| Arduino Uno | Main microcontroller |
| TMP36 Temperature Sensor | Measures ambient temperature |
| DC Motor (Fan) | Cooling actuator |
| Transistor / Motor Driver | Drives the motor via PWM |
| Resistors, Jumper Wires, Breadboard | Circuit connections |

## ⚙️ How It Works

1. The TMP36 sensor outputs an analog voltage proportional to temperature.
2. The Arduino reads this analog value and converts it into °C.
3. Based on the temperature:
   - `< 27°C` → Fan is turned **off**
   - `27°C – 40°C` → Fan speed **increases linearly** using PWM
   - `≥ 40°C` → Fan runs at **maximum speed**
4. The current temperature and corresponding PWM value are printed to the Serial Monitor every 500 ms for real-time monitoring.

## 🧪 Simulation Note

This project has been **designed and simulated on [Tinkercad Circuits](https://www.tinkercad.com/)** using a virtual Arduino Uno. It has **not yet been tested on physical hardware** — the logic and circuit have been verified through simulation only. Contributions or testing feedback from anyone who builds the physical circuit are welcome!

## 🚀 Future Improvements

- Add a DHT11/DHT22 sensor for humidity-based control
- Add an LCD display for on-device temperature readout
- Add heating element support for full climate control (not just cooling)
- Physical hardware testing and calibration

## 📄 License

This project is open-source and available for learning and modification.
