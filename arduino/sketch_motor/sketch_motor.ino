int fan=12; 
void setup() 
{
  pinMode(fan,OUTPUT); 
}
void loop() 
{
  for(fan=12;fan=12;fan++)
  { 
    digitalWrite(fan,HIGH); 
    delay(300);  
    digitalWrite(fan,LOW); 
    delay(300);
  } 
  for(fan=12;fan=12;fan--) 
  {
    digitalWrite(fan,HIGH);
    delay(300); 
    digitalWrite(fan,LOW); 
    delay(300);
  } 
}
