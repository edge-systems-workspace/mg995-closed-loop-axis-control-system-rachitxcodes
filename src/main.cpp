#include <Arduino.h>
#include <Servo.h>
Servo myServo;
#define servoPin 9
void setup() {
// write your initialization code here
    Serial.begin(9600);
    myServo.attach(servoPin);
}


void loop() {
// write your code here
}