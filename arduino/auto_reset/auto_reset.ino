int led = 13;//pin 13 as OUTPUT LED pin
int resetPin = 12;
int rele=8;
// the setup routine runs once when you press reset:
void setup() {  
  digitalWrite(resetPin, HIGH);
  pinMode(led, OUTPUT);    
  pinMode(resetPin, OUTPUT);  
  pinMode(rele,OUTPUT);    
}
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);
  digitalWrite(rele,HIGH);
  delay(2000);
  digitalWrite(resetPin, LOW);
  //delay(3000);
  //digitalWrite(rele,LOW); 
}



