# Food Spoilage Detector

## Description
The Food Spoilage Detector is a smart system that detects food spoilage using sensors like MQ4 and DHT11. It alerts users via an LCD, buzzer, and LED.

## Components
- Arduino Uno
- MQ4 Gas Sensor
- DHT11 Sensor
- ESP8266 Wi-Fi Module
- 16x2 LCD Display
- Buzzer and LED

## Block Diagram
![Block Diagram](https://github.com/Puliushakiran/Food-Spoilage-Detector/blob/main/block_diagram.png)

## Design Image
![Design Image](https://github.com/Puliushakiran/Food-Spoilage-Detector/blob/main/design_image.png)

## Code
Upload the `.ino` file to your Arduino Uno using the Arduino IDE.

## How It Works
- The MQ4 sensor detects harmful gases like methane and ammonia.
- The DHT11 sensor monitors temperature and humidity.
- If gas levels exceed the threshold, alerts are triggered via a buzzer, LED, and LCD display.
- The ESP8266 module sends alerts to users remotely for convenience.

## Setup Instructions
1. Connect all components as per the circuit diagram.
2. Upload the provided Arduino code using the Arduino IDE.
3. Power the system and monitor the LCD display for food spoilage alerts.

## License
This project is open-source and free to use for educational purposes.
