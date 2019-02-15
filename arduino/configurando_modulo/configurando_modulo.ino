#include <SoftwareSerial.h> //Libreria permite establecer comunicacion con mas pines
SoftwareSerial BT(10,11);//10 RX,11 TX 
int led;
char nomb[30]; 
int i=0; 
void setup() 
{
  BT.begin(9600); 
  Serial.begin(9600); 
  for(led=4;led<=6;led++)
  {
    pinMode(led,OUTPUT);
  } 
} 
void loop() 
{  //cuando haya datos disponibles
  if(BT.available()) 
  {//guarda los caracteres de los datos en "dato"
    char dato=BT.read(); 
    cadena[i++]=dato; 
    //coloca cada caracter recibido en el arreglo cadena 
    
    if(dato=='n') 
    {
      Serial.print(cadena)
  

