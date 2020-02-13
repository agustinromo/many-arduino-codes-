//Aplicando control a motor de DC
int symonsays;
int motor1=3; //motor2=5, enable=11, led13=13;
void setup(){
  //I'm pretending to create a 9600 bauds serial communication 
  //pinMode(led13,OUTPUT);
  //digitalWrite(led13,LOW);
  //pinMode(motor2,OUTPUT); 
  pinMode(motor1,OUTPUT);
  //pinMode(enable,OUTPUT); 
  Serial.begin(9600);
  }
  void loop(){
    if(Serial.available()>0){ //only if serial communication is available
      symonsays=Serial.read(); //then the data is coming from "symonsays" 
    if(symonsays == 'a'){
      digitalWrite(motor1,HIGH);
      //digitalWrite(motor2,LOW);
       //Serial.println("Motor girando a la izq"); //motor runs left*/
      }
      /*if(symonsays == 'b'){
       digitalWrite(motor1,LOW);
       digitalWrite(motor2,HIGH);
        //Serial.println("Motor girando a la derecha"); //motor runs right
        }*/
        if(symonsays >='0' && symonsays <= '6'){ //this is in order to asign the parameters for motor speed using pwm concept
          int Speed = map(symonsays,'0','6',0,255); //pwm
          analogWrite(motor1,Speed);//analogWrite(enable,Speed);
          Serial.println(Speed);//valiéndome pito en que dirección está 
        }
       }
      }
