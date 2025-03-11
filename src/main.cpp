#include <Arduino.h>

#define led 2
#define pulsa_encendido 3
#define pulsa_apagado 4

void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(pulsa_encendido,INPUT);
  pinMode(pulsa_apagado,INPUT);
}

void loop() 
{
  if(digitalRead(pulsa_encendido)==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  if(digitalRead(pulsa_apagado)==LOW)
  {
    digitalWrite(led,LOW);
  }
}