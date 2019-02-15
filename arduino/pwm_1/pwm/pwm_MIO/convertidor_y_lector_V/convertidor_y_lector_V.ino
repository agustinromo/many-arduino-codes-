float voltaje; 
void setup()
{
  Serial.begin(9600);
} 
void loop() 
{
  voltaje=analogRead(0); 
  voltaje=map(voltaje,0,1023,0,12000);  
  voltaje=voltaje/100; 
  Serial.print("voltaje= ");
  Serial.println(voltaje);    
}
