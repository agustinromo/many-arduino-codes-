#include<stdio.h>
int led=11; 
int symonsays; 
int vel;
void setup()
{ 
  pinMode(led,OUTPUT);  
  Serial.begin(9600);
} 
////////////////////////
void loop()
{
  pwm();
}
///////////////////////
void pwm()
{
  if(Serial.available()>0) 
  { 
    symonsays=Serial.read(); 
    if(symonsays>='0' && symonsays<='9')
    {
     vel = map(symonsays,'0','9',0,255); 
     analogWrite(led,vel);
     Serial.println(vel);
    } 
   }
  }
  //Para los motores de un dron se requieren 3.7v y 650mAh

