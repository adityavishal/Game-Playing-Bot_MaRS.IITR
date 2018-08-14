#include <SoftwareSerial.h>  
SoftwareSerial bt (3,2);
const int thumb1=5,thumb2=6,index1=12,index2=13,pwm_thumb=10,pwm_index=11;

void setup() {

  Serial.begin(9600);
  bt.begin(9600);
}

void loop()
{
  digitalWrite(pwm_thumb,1);
  digitalWrite(pwm_index,1);
  if(bt.available()>0)
  {
char input=(char)bt.read();
Serial.println(input);

  if(input=='a')
{
  paper();
}
 if(input=='b')
 {
  scissors();
  }
  if(input=='c')
  {
   stone(); 
   }
 

}
}
void scissors()
{
    analogWrite(pwm_thumb,255);
  analogWrite(pwm_index,255);
  digitalWrite(thumb2,HIGH);
  digitalWrite(thumb1,LOW);
  digitalWrite(index1,HIGH);
  digitalWrite(index2,LOW);
  delay(10);

  }
void stone()
{    analogWrite(pwm_thumb,255);
  analogWrite(pwm_index,255);

  digitalWrite(thumb2,HIGH);
  digitalWrite(thumb1,LOW);
  digitalWrite(index2,HIGH);
  digitalWrite(index1,LOW);
    delay(10);

  }
void paper()
{
    analogWrite(pwm_thumb,255);
  analogWrite(pwm_index,255);
  digitalWrite(thumb1,HIGH);
  digitalWrite(thumb2,LOW);
  digitalWrite(index1,HIGH);
  digitalWrite(index2,LOW);
    delay(10);
  }


