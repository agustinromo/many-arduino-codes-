int buzz=13, led;
const int e=3, t=2; //echo and trigger from ultrasonic sensor 

void setup(){
  pinMode(buzz,OUTPUT); 
  for(led=5; led<=7; led++)
  {
    pinMode(led,OUTPUT);
    }
  pinMode(t,OUTPUT);
  pinMode(e,INPUT);
  digitalWrite(t,LOW);
  Serial.begin(9600);
  }
    
    void loop()
    {
      long timer, d;
      
      digitalWrite(t, HIGH);
      delayMicroseconds(10); 
      digitalWrite(t, LOW);

        timer = pulseIn(e, HIGH); 
        d = timer /59; 

         Serial.print("Distancia: ");
         Serial.print(d);      //Send the disctance value to the Serial monitor
         Serial.print("cm");
         Serial.println();
         delay(1000);          //makes a cut of 1 second for each reading


        if(d >= 30 ) 
        {
          for(led=5;led<=6;led++){
          if(led/2 == 3){
          digitalWrite(led,HIGH);
          digitalWrite(buzz,LOW);
            }
           }
          }
          else  
        {
          led=5; //led green
          digitalWrite(led,HIGH);
          digitalWrite(buzz,HIGH);
          delay(500);
          digitalWrite(buzz,LOW);
          delay(500);
          }
        }
      

/*void measures()
{
   for(led=5; led<=7; led++)
      {
        if(d >= 30 ) 
        {
          led=6; //led blue
          digitalWrite(led,HIGH);
          digitalWrite(buzz,LOW);
          }
          else if(d < 30 && d >= 20 ) 
        {
          led=5; //led green
          digitalWrite(led,HIGH);
          digitalWrite(buzz,HIGH);
          delay(500);
          digitalWrite(buzz,LOW);
          delay(500);
          }
          else
          {
          led=7; //led red
          digitalWrite(led,HIGH);
          digitalWrite(buzz,HIGH);
          delay(100);
          digitalWrite(buzz,LOW);
          delay(100);
            }
        }
  }*/
