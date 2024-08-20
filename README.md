# ESP32-IMU_MOUSE
The project developed using ESP32 and MPU6050 sensor simulates mouse movements and scroll function based on hand tilt. It can communicate with other devices such as a mobile phone or computer via Bluetooth.To implement the project where an ESP32 and MPU6050 sensor simulate mouse movements and scrolling based on hand tilt, with Bluetooth communication to devices like a computer or mobile phone, you can follow these steps:

## Components Required:
ESP32 (for Bluetooth communication and processing)

MPU6050 (for capturing hand tilt/movement)

Wires (for connections)

Breadboard (optional, for easy prototyping)

## Wiring:
MPU6050 Connections:

VCC → 3.3V on ESP32

GND → GND on ESP32

SCL → GPIO 22 on ESP32

SDA → GPIO 21 on ESP32

## Step 1: Setting Up the MPU6050
The MPU6050 will be used to capture the tilt of the hand. You can obtain the accelerometer and gyroscope values to calculate the tilt.

## Step 2: Configuring Bluetooth HID on ESP32
ESP32 will be configured to act as a Bluetooth Human Interface Device (HID), which will allow it to simulate a mouse.

## Step 3: Programming the ESP32
Open the 'IMU_Mouse.ino' code in the IDE

## Step 4: Flashing the Code to ESP32
Connect your ESP32 to your computer.
Upload the code using the Arduino IDE or PlatformIO.

## Step 5: Testing
Pair the ESP32 with your computer or mobile phone via Bluetooth. The device should show up as "ESP32_Mouse."
Once connected, the ESP32 will start simulating mouse movements and scrolling based on the tilt captured by the MPU6050.

# Adjustments:
You may need to tweak the sensitivity of the gyroscope readings and the mapping values to match your preferred movement speed and scroll sensitivity.
Additional calibration may be required to ensure the device works correctly with your specific setup.

# Contribute
This basic setup should allow you to simulate mouse movements and scrolling based on hand tilt using the MPU6050 sensor and ESP32 over Bluetooth. Let me know if you need further customization or have any questions!
