int led=13; 
int modo=0;
int n_modos=3;
bool interrupt=0;
long tiempo=0; //por lo de los rebotes
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),cambio, FALLING);
  }
  void loop()
  {
    switch(modo)
    {
      case 1:
      interrupt=0; 
      digitalWrite(led,HIGH);
      break;
      case 2:
      interrupt=0; 
      digitalWrite(led,HIGH);
      delay(100);
      digitalWrite(led,LOW);
      delay(100);
      break;
      case 3:
      interrupt=0; 
      digitalWrite(led,HIGH);
      delay(50);
      digitalWrite(led,LOW);
      delay(50);
      break;
      default: digitalWrite(led,LOW);
      }
    }
    void cambio(){//Función asociada a la interrupción 0, cambia el modo 
  if (millis()>(tiempo+500)){//Evitamos la lectura de rebotes al pulsar
       modo++;
       interrupt =1;
       if (modo>n_modos){
          modo=0;
       }
    tiempo=millis();
  }   
}
