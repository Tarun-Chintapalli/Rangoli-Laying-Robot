#include<Stepper.h>
#include <Servo.h>
Servo myservo; 
int i=0;
int s=0;
int stepsperrevolution = 200;
Stepper Y_axis(stepsperrevolution , 11,10,9,8);
Stepper X_axis(stepsperrevolution , 7,6,5,4);
void setup() {
  myservo.attach(3); 
  X_axis.setSpeed(60);
  Y_axis.setSpeed(60); 
  Serial.begin(9600);
  myservo.write(100);
  // put your setup code here, to run once:
  for (i=0;i<=360;i++)
  {
    X_axis.step(15*sin(i*PI/180));
    Y_axis.step(4*cos(i*PI/180));
  }
  myservo.write(90);

}

void loop() {
  /*if(Serial.available()>0)
  {
    s = Serial.read();
    Serial.println(s);
    if(s==97)
    {
      X_axis.step(400);
    }
    if(s==100)
    {
      X_axis.step(-400);
    }
    if(s==115)
    {
      Y_axis.step(-100);
    }
    if(s==119)
    {
      Y_axis.step(100);
    }
  }*/
  
  // put your main code here, to run repeatedly:

}
