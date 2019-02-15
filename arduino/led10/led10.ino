int led1=13; 
int led2=12; 
int led3=11; 
int led4=10; 
int led5=9; 
int led6=8; 
int led7=7;
int time=40; 
void setup()
{
  
    pinMode(led1,OUTPUT); 
    pinMode(led2,OUTPUT); 
   pinMode(led3,OUTPUT); 
   pinMode(led4,OUTPUT); 
    pinMode(led5,OUTPUT); 
   pinMode(led6,OUTPUT); 
   pinMode(led7,OUTPUT);    
  
} 
void loop() 
{
    digitalWrite(led4,HIGH); 
    delay(time); 
    digitalWrite(led4,LOW); 
    delay(time);   
   
   digitalWrite(led3,HIGH);  digitalWrite(led5,HIGH); 
    delay(time);             delay(time); 
    digitalWrite(led3,LOW);  digitalWrite(led5,LOW); 
    delay(time);             delay(time); 
    
    digitalWrite(led2,HIGH); digitalWrite(led6,HIGH); 
    delay(time);             delay(time); 
    digitalWrite(led2,LOW);  digitalWrite(led6,LOW); 
    delay(time);             delay(time); 
    
    digitalWrite(led1,HIGH); digitalWrite(led7,HIGH);  
    delay(time);             delay(time); 
    digitalWrite(led1,LOW);  digitalWrite(led7,LOW); 
    delay(time);             delay(time);
}

