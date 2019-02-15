int led,leds,tecla; 
int led13=13,led12=12,led11=11,led10=10,led9=9,led8=8,led7=7; 
int time=50,times=10; 
void setup()
{
  Serial.begin(9600); 
  for(led=13;led>=7;led--)
  {
    pinMode(led,OUTPUT); 
  } 
  pinMode(led13,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led11,OUTPUT); 
  pinMode(led10,OUTPUT); 
  pinMode(led9,OUTPUT); 
  pinMode(led8,OUTPUT); 
  pinMode(led7,OUTPUT); 
} 
void loop()
{ 
  if(Serial.available()>0)
  {
    tecla = Serial.read(); 
    switch(tecla)
    {
      case 'a': digitalWrite(led10,HIGH);
                digitalWrite(led11,HIGH); digitalWrite(led9,HIGH);
                delay(time);              delay(time); 
                digitalWrite(led11,LOW);  digitalWrite(led9,LOW); 
                break;
      case 'b': 
                
                  digitalWrite(led12,HIGH); digitalWrite(led11,HIGH); digitalWrite(led10,HIGH); digitalWrite(led9,HIGH); digitalWrite(led8,HIGH); 
                  delay(times);              delay(times);              delay(times);              delay(times);             delay(times); 
                  digitalWrite(led12,LOW);  digitalWrite(led11,LOW); digitalWrite(led10,LOW);  digitalWrite(led9,LOW);   digitalWrite(led8,LOW);
                  break;  
      case 'c': for(led=7;led<=13;led++)
                    {
                      digitalWrite(led,HIGH); 
                      delay(times); 
                      digitalWrite(led,LOW);
                    } 
                 for(led=13;led>=7;led--) 
                    {
                      digitalWrite(led,HIGH); 
                      delay(times); 
                      digitalWrite(led,LOW);
                    } 
                    break; 
       case'd': digitalWrite(led12,HIGH); digitalWrite(led11,HIGH); digitalWrite(led9,HIGH); digitalWrite(led8,HIGH);
                delay(times);              delay(times);              delay(times);             delay(times); 
                digitalWrite(led12,LOW);  digitalWrite(led11,LOW);  digitalWrite(led9,LOW);  digitalWrite(led8,LOW); 
                break; 
       case'f': digitalWrite(led13,HIGH); digitalWrite(led7,HIGH);
                delay(times);              delay(times); 
                digitalWrite(led13,LOW);   digitalWrite(led7,LOW); 
                break;  
    }           
  }      
}
  

