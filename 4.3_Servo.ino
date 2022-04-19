

#include <Servo.h>

Servo myservo;  // create servo object to control a servo


int pos = 0;  

void setup() {
  myservo.attach(9);
}

void loop() {
  for (pos = 172 ; pos <= 32 ; pos += 90) { 
    
    myservo.write(pos);              
    delay(15);                      
  
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(172);              
    delay(1000);      
    
    myservo.write(32);           
    delay(1000);    
    
    myservo.write(90);           
    delay(1000);
  }
}
