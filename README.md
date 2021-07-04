# servo_motor_control_arduino

 the Control the position of a servo motor with your Arduino and a potentiometer. 


## Hardware Required:

    Arduino Board

    Servo Motor

    hook-up wires
    
    Breadboard
    
    potentiometers
    
### Circuit:

Servo motors have three wires: power, ground, and signal. The power wire is typically red, and should be connected to the 5V pin on the Arduino board. The ground wire is typically black or brown and should be connected to a ground pin on the board. The signal pin is typically yellow, orange or white and should be connected to pin 3 or 5 or 6 or 9 or 10 or 10 or 11 on the board.

Servo motor can be directly connected to Arduino. We connected the motor to the Arduino as shown in:

[Tinkercad](https://www.tinkercad.com/things/fxOLd5YvLqa-bodacious-gogo-leelo/editel?sharecode=qE_fPSPuOXOIrG_vqTeUz5Nro4Yg6E6_sQJluLBPApY)

![circuit_1](https://user-images.githubusercontent.com/86836634/124371237-72865000-dc88-11eb-88c1-46fe2767877a.png)

كما هو موضح قمنا بتوصيل السيرفو موتور في الأردوينوأونو وأستخدمنا الكود التالي لتحريك السيرفو موتور مقدار 90 درجة ثم تعود لنقطة البداية   

#### code:

#include <Servo.h>

Servo myservo1;      
Servo myservo2;     
Servo myservo3;      
Servo myservo4;      
Servo myservo5;    
Servo myservo6;     // create servo object to control a servo
              // twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
 
 myservo1.attach(3);           
  myservo2.attach(5);           
  myservo3.attach(6);           
  myservo4.attach(9);          
  myservo5.attach(10);        
  myservo6.attach(11);       // attaches the servo on pin 11 to the servo object
}

void loop() {
 
 for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 90 degrees
    // in steps of 1 degree
   
   myservo1.write(pos);       
    myservo2.write(pos);     
    myservo3.write(pos);     
    myservo4.write(pos);     
    myservo5.write(pos);      
    myservo6.write(pos);       // tell servo to go to position in variable 'pos'
    
   delay(15);                       

}

for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
   
   myservo1.write(pos);              
    myservo2.write(pos);             
    myservo3.write(pos);              
    myservo4.write(pos);              
    myservo5.write(pos);              
    myservo6.write(pos);              // tell servo to go to position in variable 'pos'
    
   delay(15);                       // waits 15ms for the servo to reach the position
 
 }

}


In this piece of the project, we will set up software that reads the voltage output of the potentiometer. It then converts that number it into an angle for the servo. 

### Potentiometer:

 we might want to control the angle a servo rotates without having to constantly modify the code. One way to do this is to use a potentiometer. Think of a potentiometer as a variable resistor. By turning the knob, you can control the voltage output of the potentiometer.
 
 حيث باستخدام مجزئ الجهد (المقاومة المتغيرة ) وتدويرها ستدور محركات السيرفو فى نفس اتجاه دوران المقاومة المتغيرة وعند عكس حركة الدوران للمقاومة المتغيرة ستنعكس حركة دوران محرك السيرفو وسترى الحركة وكأن المحرك فى يدك تماماً   
 
#### A potentiometer has 3 terminals:

 Two outer terminals are used for power: one outer pin connects to ground and the other connects to positive voltage. Potentiometers don’t have polarity, so it doesn’t matter which one is ground and which one is connected to positive voltage.
A central control terminal is used for voltage output: turning the knob of the potentiometer increases or decreases the resistance, which lowers or increases the voltage output.

[Tinkercad](https://www.tinkercad.com/things/cxyFinIPYe5-sizzling-bombul-stantia/editel?sharecode=PCVgsd50EJTR4tb-M1YFkH5m1YLiugizyMBJcnSE0dU)

![circuit_2](https://user-images.githubusercontent.com/86836634/124371221-3a7f0d00-dc88-11eb-9499-47ede91e17fc.png)


##### code:

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
 
  myservo1.attach(3);  
 
 myservo2.attach(5);
 
 myservo3.attach(6);
 
 myservo4.attach(9);                     // attaches the servo on pin 9 to the servo object
 
 myservo2.attach(5); 
 
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

In the end it has become easier to control the position of the servo motor using the Arduino and potentiometer.
