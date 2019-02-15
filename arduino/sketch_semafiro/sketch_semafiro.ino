int ledgreen=10; 
int ledyellow=12; 
int ledred=11; 
int led;
int tecla;
void setup() 
{
  Serial.begin(9600);
  pinMode(ledred,OUTPUT);  
  pinMode(ledyellow,OUTPUT);  
  pinMode(ledgreen,OUTPUT); 
} 
void loop() 
{
  if(Serial.available()>0)
  { 
    tecla = Serial.read(); 
    if(tecla=='a')
    {
      digitalWrite(ledred,LOW);
      digitalWrite(ledgreen,HIGH); 
    } 
   else if(tecla=='b')
   {
     digitalWrite(ledgreen,LOW); 
     digitalWrite(ledyellow,HIGH);
   } 
   else if(tecla='c')
   {
     digitalWrite(ledyellow,LOW); 
     digitalWrite(ledred,HIGH); 
   } 
   else if(tecla='A') 
   {
     for(led=10;led<=12;led++)
     {
       digitalWrite(led,HIGH);
     } 
   }
   else if(tecla='B') 
   
     for(led=10;led<=12;led++)
     {
       digitalWrite(led,LOW);
     }
   }
}
 
  
  
