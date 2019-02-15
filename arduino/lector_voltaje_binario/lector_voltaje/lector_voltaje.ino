float voltaje; 
void setup()
{
  Serial.begin(9600);
} 
void loop()
{
  int valor=analogRead(A0); 
  voltaje=valor*(5 / 1023); 
  Serial.println(voltaje);
}
