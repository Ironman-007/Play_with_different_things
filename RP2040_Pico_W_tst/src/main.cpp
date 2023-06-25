#include <Arduino.h>

SerialUSB SerialDebug;

volatile int i = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the setup function runs once when you press reset or power the board
void setup1() {
  SerialDebug.begin(115200);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(400);                      // wait for a second
  i ++;
}

// the loop function runs over and over again forever
void loop1() {
  SerialDebug.println(i);
  delay(100);
}
