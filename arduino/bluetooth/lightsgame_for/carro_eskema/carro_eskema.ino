int i,j,motor=5,motorcito; 
int dato;
void setup()
{
  Serial.begin(9600);
  pinMode(motor,OUTPUT); 
  pinMode(motorcito,OUTPUT); 
}
void loop()
{
  if(Serial.available()>0)
  {
    dato = Serial.read(); 
    if(dato=='1')
    {
      for(i=0;i<=100;i++) 
      {
        digitalWrite(motor,HIGH); 
        delayMicroseconds(1850); 
        digitalWrite(motor,LOW); 
        delayMicroseconds(1850);
      }
    } 
    else if(dato=='2') 
      {
        for(j=0;j<=100;j++) 
        {
          digitalWrite(motor,HIGH); 
          delayMicroseconds(1250); 
          digitalWrite(motor,LOW); 
          delayMicroseconds(1250);
        }
      }
    
  } 
}
  
