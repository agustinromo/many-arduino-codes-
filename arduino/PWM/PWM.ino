int motor=3; 
int Speed; 
int symonsays;
void setup()
{
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0) 
  { 
    symonsays=Serial.read(); 
    if(symonsays==0 && symonsays==5)
  Speed=map(motor,0,5,0,255); 
  analogWrite(motor,Speed); 
  }
}
