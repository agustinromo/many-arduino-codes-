#include <SoftwareSerial.h>
SoftwareSerial BT1(10, 11); // RX | TX
void setup()
  { pinMode(8, OUTPUT);        
    pinMode(9, OUTPUT);        
    digitalWrite(9, HIGH);
    delay (500) ;              
    Serial.begin(9600);
    Serial.println("Configuración del módulo HC-05");
    digitalWrite (8, HIGH);    
    Serial.println("Lectura de comandos AT:");
    BT1.begin(38400); 
  }
 
void loop()
  {  
    if (BT1.available())
    {
           Serial.write(BT1.read());
    }
     if (Serial.available())
     {
        BT1.write(Serial.read());
     }
  } 
///https://aprendiendoarduino.wordpress.com/2016/11/13/bluetooth-en-arduino/
//https://naylampmechatronics.com/blog/24_configuracion-del-modulo-bluetooth-hc-05-usa.html

