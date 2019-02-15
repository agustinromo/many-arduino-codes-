int time=100; 
int pin; 
void setup() 
{
  for(pin=12;pin>=8;pin--) 
  {
    pinMode(pin,OUTPUT); 
  } 
}  
void loop() 
{
   for(pin=12;pin>=8;pin--) 
  {
    digitalWrite(pin,HIGH); 
    delay(time); 
    digitalWrite(pin,LOW); 
    delay(time); 
  }  
}
