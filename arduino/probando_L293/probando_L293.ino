int motor=5; 
int motor2=7; //Declaramos las variables y donde seran colocados los pines del driver
int dato; // variable del dato que activara al motor
void setup()
{
  Serial.begin(9600); //Velocidad de comunicacion serial de 9600 bauds
  pinMode(motor,OUTPUT); // salida del arduino para un giro del motor
  pinMode(motor2,OUTPUT); //salida del giro al otro lado 
} 
void loop()
{ 
  if(Serial.available()>0) //Si la comunicacion serial esta disponible
  { 
    dato = Serial.read(); //Lectura de la comunicacion serial 
    if(dato=='1') //Inicio de sentencias para activar el motor
    { 
      digitalWrite(motor,HIGH); //Motor gira hacia un lado 
      delay(50);
      digitalWrite(motor,LOW);
    } 
    else if(dato=='2') // Sentencia para activar motor
    {
      digitalWrite(motor2,HIGH); //Motor gira hacia el otro lado 
       delay(50);
      digitalWrite(motor2,LOW);
    } 
    else 
    { 
      digitalWrite(motor,LOW); 
      digitalWrite(motor2,LOW); 
      }
  }
}
