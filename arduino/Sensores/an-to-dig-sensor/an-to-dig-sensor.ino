//this code takes de data from an analog sensor and digitalizes them
float sensor;
float dig, cm;
void setup()
{
  Serial.begin(9600);
  }
  void loop()
  {
    sensor = analogRead(A0);
    dig = sensor*(5/1023);
    cm = dig*2.54; //after digitalizing, makes a conversion from inches to cm
    Serial.println(cm);
    delay(1000);
    }
