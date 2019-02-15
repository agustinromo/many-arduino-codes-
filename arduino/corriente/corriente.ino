int corriente; 
void loop() 
{
  Serial.begin(9600);
} 
void setup()
{
  corriente=analogRead(0); 
  corriente=map(corriente,0,1023,0,10000); //10mA 
  corriente=corriente-5000;
  Serial.print(corriente); 
  
}
