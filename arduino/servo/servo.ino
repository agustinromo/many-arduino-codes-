#include <Servo.h> 
Servo servo;
int angulo;
void setup() 
{
  servo.attach(9);
} 
void loop() 
{
  for(angulo=0;angulo<=180;angulo++) 
  {
    servo.write(angulo);
    delay(15); 
  } 
  for(angulo=180;angulo>=0;angulo--) 
  {
    servo.write(angulo); 
    delay(15); 
  }
}
