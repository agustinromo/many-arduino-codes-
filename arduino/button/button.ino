int boton=1; 
int boton1=2; 
int led; 
void setup()
{
  pinMode(boton,INPUT); 
  pinMode(boton1,INPUT); 
  for(led=2;led<=11;led++)
  {
    pinMode(led,OUTPUT);
  }
} 
void loop() 
{
  if(digitalRead(boton)==HIGH)
  {
    for(led=2;led<=6;led++)
    {
      digitalWrite(led,HIGH); 
      delay(50); 
      digitalWrite(led,LOW); 
    } 
  }
    else if(digitalRead(boton1)==HIGH)
    {
      for(led=11;led>=7;led--)
      {
        digitalWrite(led,HIGH); 
        delay(100); 
        digitalWrite(led,LOW);
      }
    }
}
