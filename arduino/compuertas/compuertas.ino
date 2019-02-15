int boton=3,boton1=2,tecla; 
int led=13,led1=12,led2=11; 
//a=not 
//b=or
//c=and
void setup()
{
  pinMode(boton,INPUT); 
  pinMode(boton1,INPUT);
  pinMode(led,OUTPUT); 
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT);
  
} 
void loop()
{
  switch(tecla) 
  {
    case'a': 
             if(digitalRead(boton)==HIGH)
            { 
              digitalWrite(led,HIGH); 
              digitalWrite(led1,LOW); 
              digitalWrite(led2,LOW);
            } 
            else 
            { 
              digitalWrite(led,LOW); 
              digitalWrite(led1,LOW); 
              digitalWrite(led2,HIGH); 
            } 
            break; 
    case'b': 
             if(digitalRead(boton)==HIGH && digitalRead(boton1)==HIGH) 
             { 
               digitalWrite(led,HIGH); 
               digitalWrite(led1,HIGH); 
               digitalWrite(led2,HIGH); 
             }
             else if(digitalRead(boton)==LOW && digitalRead(boton1)==LOW) 
             { 
               digitalWrite(led,LOW); 
               digitalWrite(led1,LOW); 
               digitalWrite(led2,LOW); 
             } 
             else if(digitalRead(boton)==LOW && digitalRead(boton1)==HIGH) 
             { 
               digitalWrite(led,LOW); 
               digitalWrite(led1,HIGH); 
               digitalWrite(led2,HIGH); 
             } 
             else  
             { 
               digitalWrite(led,HIGH); 
               digitalWrite(led1,LOW); 
               digitalWrite(led2,HIGH); 
             } 
             break; 
    case'c': 
             if(digitalRead(boton)==HIGH && digitalRead(boton1)==HIGH) 
             { 
               digitalWrite(led,HIGH); 
               digitalWrite(led1,HIGH); 
               digitalWrite(led2,HIGH); 
             }
             else if(digitalRead(boton)==LOW && digitalRead(boton1)==LOW) 
             { 
               digitalWrite(led,LOW); 
               digitalWrite(led1,LOW); 
               digitalWrite(led2,LOW); 
             } 
             else if(digitalRead(boton)==LOW && digitalRead(boton1)==HIGH) 
             { 
               digitalWrite(led,LOW); 
               digitalWrite(led1,HIGH); 
               digitalWrite(led2,LOW); 
             } 
             else  
             { 
               digitalWrite(led,HIGH); 
               digitalWrite(led1,LOW); 
               digitalWrite(led2,LOW); 
             } 
             break; 
  } 
}
              
