
#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo2;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo3;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo4;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo5;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo myservo6;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo1.attach(3);  // attaches the servo on pin 3 to the servo object
  myservo2.attach(5);  // attaches the servo on pin 5 to the servo object
  myservo3.attach(6);  // attaches the servo on pin 6 to the servo object
  myservo4.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo5.attach(10);  // attaches the servo on pin 10 to the servo object
  myservo6.attach(11);  // attaches the servo on pin 11 to the servo object
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
    myservo1.write(pos);  // tell servo to go to position in variable 'pos'
    myservo2.write(pos);  // tell servo to go to position in variable 'pos'
    myservo3.write(pos);  // tell servo to go to position in variable 'pos'
    myservo4.write(pos);  // tell servo to go to position in variable 'pos'
    myservo5.write(pos);  // tell servo to go to position in variable 'pos'
    myservo6.write(pos);  // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    myservo3.write(pos);              // tell servo to go to position in variable 'pos'
    myservo4.write(pos);              // tell servo to go to position in variable 'pos'
    myservo5.write(pos);              // tell servo to go to position in variable 'pos'
    myservo6.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
