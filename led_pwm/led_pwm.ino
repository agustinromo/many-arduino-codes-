int led=13;
int blue=5;
long ida=500;
long vuelta=500;
void setup() {
  // put your setup code here, to run once:
 pinMode(led,OUTPUT);
 pinMode(blue,OUTPUT);
 digitalWrite(led,LOW);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=6;i++)
  {
    analogWrite(blue,i);
    Serial.print(i);
    delay(ida);
  }
  for(int i=6;i>=0;i--)
  {
    analogWrite(blue,i);
    Serial.print(i);
    delay(vuelta);
  }
}
