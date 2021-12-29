int rgb; 
void setup(){
  {
    for(rgb=5; rgb<=7; rgb++)
    {
      pinMode(rgb,OUTPUT);
   
      }
    }
  }
  void loop()
  {
    for(rgb=5; rgb<=7; rgb++){
     rgb = 6;
    digitalWrite(rgb,LOW);
     }
    }
   /*
   
    digitalWrite(red,HIGH);
    digitalWrite(blue,HIGH);
    delay(1000);
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
    delay(1000);
    digitalWrite(blue,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
    delay(1000);
   
   */
