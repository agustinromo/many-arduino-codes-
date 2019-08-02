//mesa sintetizadora 
int led1 = 0;//drums sound   
int led2 = 1;//bass sound
int led3 = 2;//guitar sound    
int led4 = 3;//piano sound  
int led5 = 8;//drums & bass sound  
int led6 = 9;//drums & guitar sound
int led7 = 10;//drums & piano sound
int led8 = 11;//bass & guitar sound 
int led9 = 12;//bass & piano sound 
int led10= 13;//guitar & piano sound 

int cny1 = 4;//drums input    
int cny2 = 5;//bass input 
int cny3 = 6;//guitar input    
int cny4 = 7;//piano input   
int value1 = 0; //variables for keeping the cny70's values
int value2 = 0; //
int value3 = 0; //
int value4 = 0; //

void setup() { 
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);     
  pinMode(cny1, INPUT);     
  pinMode(cny2, INPUT);
  pinMode(led3, OUTPUT);     
  pinMode(led4, OUTPUT);  
  pinMode(led5, OUTPUT);     
  pinMode(led6, OUTPUT); 
  pinMode(cny3, INPUT);     
  pinMode(cny4, INPUT);
} 
void loop() { 
  values();
  solos();//each instrument's sound
  duos();//sound by pairs
  trio();//sound by trios
  band();//all instruments together
}
void values()
{
  value1 = digitalRead(cny1);
  value2 = digitalRead(cny2);
  value3 = digitalRead(cny3);
  value4 = digitalRead(cny4);
  }
void solos()
{
  if((value1 == LOW) && (value2==HIGH) && (value3==HIGH) && (value4==HIGH))
  {
    digitalWrite(led1,HIGH); //drums
    }
    if((value1 == HIGH) && (value2==LOW) && (value3==HIGH) && (value4==HIGH))
  {
    digitalWrite(led2,HIGH);//bass
    }
    if((value1 == HIGH) && (value2==HIGH) && (value3==LOW) && (value4==HIGH))
  {
    digitalWrite(led3,HIGH);//guitar
    }
    if((value1 == HIGH) && (value2==HIGH) && (value3==HIGH) && (value4==LOW))
  {
    digitalWrite(led4,HIGH);//piano
    }
    else
    {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      }
   }
   void duos()
   {
    if((value1 == LOW) && (value2==LOW) && (value3==HIGH) && (value4==HIGH))
  {
    digitalWrite(led5,HIGH);//drums & bass 
    }
    if((value1 == LOW) && (value2==HIGH) && (value3==LOW) && (value4==HIGH))
  {
    digitalWrite(led6,HIGH);//drums & guitar
    }
    if((value1 == LOW) && (value2==HIGH) && (value3==HIGH) && (value4==LOW))
  {
    digitalWrite(led7,HIGH);//drums & piano
    }
    if((value1 == HIGH) && (value2==LOW) && (value3==LOW) && (value4==HIGH))
   {
    digitalWrite(led8,HIGH);//bass & guitar
    }
    if((value1 == HIGH) && (value2==LOW) && (value3==HIGH) && (value4==LOW))
   {
    digitalWrite(led9,HIGH);//bass & piano
    }
    if((value1 == HIGH) && (value2==HIGH) && (value3==LOW) && (value4==LOW))
    {
    digitalWrite(led10,HIGH);//guitar & piano
    }
    else
    {
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW); 
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      }
    } 
    void trio()
    {
    if((value1 == LOW) && (value2==LOW) && (value3==LOW) && (value4==HIGH))
  {
    digitalWrite(led5,HIGH);//drums,bass & guitar 
    delay(300);
    digitalWrite(led5,LOW);
    delay(300);
    }
    if((value1 == LOW) && (value2==LOW) && (value3==HIGH) && (value4==LOW))
  {
    digitalWrite(led6,HIGH);//drums,bass & piano
    delay(300);
    digitalWrite(led6,LOW);
    delay(300);
    }
    if((value1 == LOW) && (value2==HIGH) && (value3==LOW) && (value4==LOW))
  {
    digitalWrite(led7,HIGH);//drums,guitar & piano
    delay(300);
    digitalWrite(led7,LOW);
    delay(300);
    }
    if((value1 == HIGH) && (value2==LOW) && (value3==LOW) && (value4==LOW))
   {
    digitalWrite(led8,HIGH);//bass,guitar & piano
    delay(300);
    digitalWrite(led8,LOW);
    delay(300);
    }
     else
    {
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW); 
      }
    }
    void band()
    {
      if((value1 == LOW) && (value2==LOW) && (value3==LOW) && (value4==LOW))
     {
       digitalWrite(led1,HIGH);//drums,bass,guitar & piano
       digitalWrite(led2,HIGH);
       digitalWrite(led3,HIGH);
       digitalWrite(led4,HIGH);
       digitalWrite(led5,HIGH);
       digitalWrite(led6,HIGH);
       digitalWrite(led7,HIGH);
       digitalWrite(led8,HIGH);
       digitalWrite(led9,HIGH);
       digitalWrite(led10,HIGH);
      }
      else
      {
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led10,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      }
     }  
     /*
      * 1 modulo bluetooth hc-05
      */ 
