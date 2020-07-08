int pin[] = {12,11,10,9}; 

void setup()
{
  for(int i=0;i<4;i++)
  {
    pinMode(pin[i],OUTPUT);
    }
  }
  void loop()
  {
    byte num[]={0,1,3,6,4,12,0,12,4,6,3,1,0};
    for(byte i=0; i<13;i++)
    {
      displayBinary(num[i]);
      delay(25);
      }
    }
    void displayBinary(byte numToShow)
    {
      for(int i=0; i<4; i++)
      {
        if(bitRead(numToShow,1)==1)
        {
          digitalWrite(pin[i],HIGH);
          }
          else
          {
            digitalWrite(pin[i],LOW);
            }
        }
      }
