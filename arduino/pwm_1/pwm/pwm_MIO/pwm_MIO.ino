int motor=5; 
int led=4;
int symonsays; 
int vel;
void setup()
{ 
  pinMode(motor,OUTPUT); 
  pinMode(led,OUTPUT); 
  Serial.begin(9600);
} 
void loop()
{
  if(Serial.available()>0) 
  { 
    symonsays=Serial.read(); 
    if(symonsays>='0' && symonsays<='5')
    {
     vel = map(symonsays,'0','5',0,255); 
     analogWrite(motor,vel);
    } 
    else 
    {
      digitalWrite(led,HIGH); 
      delay(300); 
      digitalWrite(led,LOW); 
      delay(300);
    }
    
   }
}
