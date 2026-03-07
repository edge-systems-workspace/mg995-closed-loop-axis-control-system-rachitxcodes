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
    myServo.write(0);
    delay(500);
    myServo.write(90);
    delay(50);
    myServo.write(120);
    delay(50);
    myServo.write(180);
    delay(50);
    
    // Move from 0° to 180°
//     for (int pos = 0; pos <= 180; pos++) {
//         myServo.write(pos);
//         delay(50);
//     }
//
//     // Move from 180° back to 0°
//     for (int pos = 180; pos >= 0; pos--) {
//         myServo.write(pos);
//         delay(50);
//     }
}