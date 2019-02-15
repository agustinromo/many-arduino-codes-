//#include <SoftwareSerial.h> 
//SoftwareSerial BT(5,6); // 5 RX, 6 TX 
int led,leds,led8=8; 
int time=50; 
int tecla; 
void setup() 
{
  Serial.begin(9600); 
  //BT.begin(9600);
  for(led=13;led>=7;led--) 
  {
    pinMode(led,OUTPUT);  
  } 
  pinMode(led8,OUTPUT);
} 
void loop() 
{
  if(Serial.available()>0)   
  {
    tecla = Serial.read(); 
    if(tecla=='x') 
    {
      for(led=13;led>=7;led--) 
  {
    digitalWrite(led,HIGH); 
    delay(time); 
    digitalWrite(led,LOW); 
    delay(time); 
  } 
  for(led=7;led<=13;led++) 
  {
    digitalWrite(led,HIGH); 
    delay(time); 
    digitalWrite(led,LOW); 
    delay(time); 
  } 
    } 
   else if(tecla=='y') 
   { 
    for(led=13;led>=7;led--) 
     { 
      digitalWrite(led,HIGH);  
      delay(10);  
      digitalWrite(led,LOW); 
      delay(10);
     }  
     for(led=7;led<=13;led++) 
     { 
      digitalWrite(led,HIGH);  
      delay(10);  
      digitalWrite(led,LOW); 
      delay(10);
     } 
   } 
   else if(tecla=='z') 
   { 
    for(led=13;led>=7;led--) 
     { 
      digitalWrite(led,LOW); 
      //digitalWrite(led8,LOW); 
     } 
   } 
   else if(tecla=='w')
   { 
     digitalWrite(led8,HIGH);
   }   
   else if(tecla=='a') 
   { 
     for(led=13;led>=7;led--) 
     {
       digitalWrite(led,HIGH);
     }
   }  
   else if(tecla=='b') 
   {
     for(led=13;led>=10;led--) 
     { 
       for(leds=7;leds<=10;leds++) 
       { 
         digitalWrite(led,HIGH); 
         digitalWrite(leds,HIGH);
       }
     }
   }
} 
}
