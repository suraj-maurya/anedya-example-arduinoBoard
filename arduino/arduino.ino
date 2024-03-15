#include <Arduino.h>
#include <SoftwareSerial.h>

//SoftwareSerial Serial1(2, 3); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  Serial1.println("Arduino Uno to ESP01 Communication");
  // set the data rate for the SoftwareSerial port
  Serial1.begin(9600);
  Serial1.println("AT");
}

void loop() {
  // read from ESP01 and print it to Arduino Serial Monitor
  if (Serial1.available()) {
    Serial.write(Serial1.read());
  }
}
