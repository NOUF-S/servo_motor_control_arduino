

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int pot1 = A0; 
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;
int pot5 = A4;  // analog pin used to connect the potentiometer

int valPot1;   // variable to read the value from the analog pin
int valPot2;
int valPot3;
int valPot4;
int valPot5;

void setup() {
  myservo1.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(5);
  myservo3.attach(6);
  myservo4.attach(9);
  myservo5.attach(10);
}

void loop() {
  valPot1 = analogRead(pot1);            // reads the value of the potentiometer (value between 0 and 1023)
  valPot1 = map(valPot1, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo1.write(valPot1);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
  
  valPot2 = analogRead(pot2);            
  valPot2 = map(valPot2, 0, 1023, 0, 180);    
  myservo2.write(valPot2);  
  delay(15); 
  
  valPot3 = analogRead(pot3);            
  valPot3 = map(valPot3, 0, 1023, 0, 180);    
  myservo3.write(valPot3);  
  delay(15);  
  
  valPot4 = analogRead(pot4);            
  valPot4 = map(valPot4, 0, 1023, 0, 180);    
  myservo4.write(valPot4);  
  delay(15); 
  
  valPot5 = analogRead(pot5);            
  valPot5 = map(valPot5, 0, 1023, 0, 180);    
  myservo5.write(valPot5);  
  delay(15); 
  }
