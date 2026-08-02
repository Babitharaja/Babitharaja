===========================================================
        SMART KITCHEN SAFETY AND FAN AUTOMATION SYSTEM
===========================================================

Project Name:
IoT-Based Smart Kitchen Safety and Fan Automation System

Controller:
ESP32 Development Board

Programming Language:
Arduino (C++)

IDE Used:
Arduino IDE 2.x

-----------------------------------------------------------
DESCRIPTION
-----------------------------------------------------------

This project is an IoT-based Smart Kitchen Safety and Fan
Automation System developed using the ESP32 microcontroller.
The system continuously monitors the kitchen environment by
reading temperature, gas leakage, and flame conditions.

If the temperature exceeds the preset limit, the relay
automatically turns ON the exhaust fan.

If gas leakage or fire is detected, the system activates the
buzzer to alert the user immediately.

The current temperature, gas sensor value, fan status, and
flame detection status are displayed on a 16x2 LCD with an
I2C interface.

-----------------------------------------------------------
COMPONENTS USED
-----------------------------------------------------------

• ESP32 Development Board
• DHT11 Temperature and Humidity Sensor
• MQ-2 Gas Sensor
• Flame Sensor
• 16x2 LCD Display with I2C Module
• 5V Relay Module
• DC Fan
• Buzzer
• Jumper Wires
• Breadboard
• Power Supply

-----------------------------------------------------------
PIN CONNECTIONS
-----------------------------------------------------------

DHT11 Sensor          -> GPIO 4
MQ-2 Gas Sensor       -> GPIO 34
Flame Sensor          -> GPIO 27
Relay Module          -> GPIO 26
Buzzer                -> GPIO 25
LCD SDA               -> GPIO 21
LCD SCL               -> GPIO 22

-----------------------------------------------------------
REQUIRED LIBRARIES
-----------------------------------------------------------

• DHT sensor library by Adafruit
• Adafruit Unified Sensor
• LiquidCrystal I2C
• Wire (Built-in)

-----------------------------------------------------------
WORKING PRINCIPLE
-----------------------------------------------------------

1. Read temperature from the DHT11 sensor.
2. Read gas concentration from the MQ-2 sensor.
3. Read flame detection status.
4. Display sensor values on the LCD.
5. If temperature exceeds 30°C:
      • Turn ON the relay.
      • Start the exhaust fan.
6. If gas leakage or flame is detected:
      • Activate the buzzer.
7. Continue monitoring continuously.

-----------------------------------------------------------
HOW TO RUN
-----------------------------------------------------------

1. Install Arduino IDE.
2. Install all required libraries.
3. Select ESP32 Development Board.
4. Connect the ESP32 using a USB cable.
5. Upload Smart_Kitchen_Safety_System.ino.
6. Open the Serial Monitor (115200 baud rate).
7. Observe sensor readings and LCD output.

-----------------------------------------------------------
AUTHOR
-----------------------------------------------------------

Project Title:
IoT-Based Smart Kitchen Safety and Fan Automation System

Developed for Academic Project