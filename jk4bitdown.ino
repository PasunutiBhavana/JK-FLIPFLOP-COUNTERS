#include"Arduino.h"
#include"jklogic.h"
int A,B,C,D,E,F,G,H;
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
A=1;
B=1;
C=1;
D=1;
for( int i=1;i<=16;i++)
{
  if (i>6)
  {
E=jklogic(A,!A);
F=jklogic(B,!B);
G=jklogic(C,!C);
H=jklogic(D,!D);
Serial.println(H);
digitalWrite(5,H);
digitalWrite(6,G);
digitalWrite(7,F);
digitalWrite(8,E);
delay(1000);
  }
if(i%8==0)
A=!A;

if(i%4==0)
B=!B;

if(i%2==0)
C=!C;

D=!D;
}
}
