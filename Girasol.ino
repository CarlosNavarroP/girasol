#include <Servo.h>
Servo myservo;
int pos = 90;
int LDRizquierdo = 1;
int LDRderecho = 0;
int izquierda = 0;
int derecha = 0;
void setup()
{
  Serial.begin(9600);
  myservo.attach(9);
}
void loop()
{
  izquierda = analogRead(LDRizquierdo);
  derecha = analogRead(LDRderecho);
  Serial.println(izquierda);
  Serial.println(derecha);
  if (izquierda > (derecha +110))
  {
    if (pos < 179)
    {
      pos=pos+1;
    }
    myservo.write(pos);
  } 
  if (izquierda > (derecha +110))
  {
    if (pos < 179)
    {
      pos=pos+1;
    }
    myservo.write(pos);  
  }
} 
