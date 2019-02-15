int i,j,motor=5;
void setup()
{
  pinMode(motor,OUTPUT); 
} 
void loop()
{
  for(i=0;i<=100;i++)
  { 
    digitalWrite(motor,HIGH); 
    delayMicroseconds(1850); 
    digitalWrite(motor,LOW); 
    delayMicroseconds(1850);
  } 
  for(j=0;j<=100;j++)
  {
    digitalWrite(motor,HIGH); 
    delayMicroseconds(1250); 
    digitalWrite(motor,LOW); 
    delayMicroseconds(1250);
  } 
}
