int fc = 4; 
void setup()
{
  pinMode(fc,INPUT); 
  Serial.begin(9600);
}
void loop()
{
  if(digitalRead(fc) == true)
  {
    Serial.println("humedad detectada"); 
  }
   else 
   {
    Serial.println("no hay humedad"); 
   } 
   delay(5000);
}

