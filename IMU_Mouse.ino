#include <Wire.h>
#include <BluetoothSerial.h>
#include "MPU6050.h"
#include "HIDMouse.h"

BluetoothSerial SerialBT;
MPU6050 mpu;

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22); // SDA, SCL
  mpu.initialize();

  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed");
    while (1);
  }

  SerialBT.begin("ESP32_Mouse");
  HIDMouse.begin();
}

void loop() {
  int16_t ax, ay, az;
  int16_t gx, gy, gz;

  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  // Convert gyroscope values to mouse movements
  int mouseX = gx / 131;
  int mouseY = gy / 131;

  // Map these values to a suitable range for mouse movement
  mouseX = map(mouseX, -32768, 32767, -10, 10);
  mouseY = map(mouseY, -32768, 32767, -10, 10);

  // Simulate mouse movement
  HIDMouse.move(mouseX, mouseY);

  // Simulate scroll function (for example, using the Z-axis of the gyroscope)
  int scrollValue = gz / 131;
  scrollValue = map(scrollValue, -32768, 32767, -5, 5);
  if (scrollValue != 0) {
    HIDMouse.scroll(scrollValue);
  }

  delay(10);
}
