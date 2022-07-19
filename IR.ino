#include <Servo.h>

Servo myservo1;  
Servo myservo2;
Servo myservo3;
int pos = 0;    
char choice;
void setup() {
  myservo1.attach(9);  
  myservo2.attach(10);
  myservo3.attach(8);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available()>0)
  {
    choice=(Serial.read());
    switch(choice)
    {
      case '1':
                 for(pos=0;pos<=180;pos++)
                 {
                    myservo1.write(pos);
                    delay(80);
                 }
               break;
      case '2':
      
              for(pos=0;pos<=90;pos++)
                 {
                    myservo2.write(pos);
                    delay(100);
                 }
                 for(pos=90;pos>=0;pos--)
                 {
                    myservo2.write(pos);
                    delay(100);
                 }
               break;
       case '3':
               for(pos=0;pos<=360;pos++)
                 {
                    myservo3.write(pos);
                    delay(50);
                 }
               break;  
        default:
                 break;  
    }
  }
}
