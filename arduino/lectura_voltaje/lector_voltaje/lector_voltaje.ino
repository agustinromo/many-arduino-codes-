float voltaje; 
int valor;
void setup()
{
  Serial.begin(9600); 
} 
void loop()
{
  valor= analogRead(A0); 
  voltaje= valor * (5.0 / 1023.0); 
  Serial.println(voltaje);
}
