#include <SoftwareSerial.h>
int i;
int m;
int r;
char c;
SoftwareSerial bt(4, 3);
void setup() {
Serial.begin(9600);
bt.begin(9600);
}
void loop() {
  Input();
  char sendr=logic();;
  bt.println(sendr);
  delay(20);
}
void Input(){
int flexRead_i = analogRead(A1);
int flexRead_m = analogRead(A2);
int flexRead_r = analogRead(A3);
i = map(flexRead_i, 505, 770, 1, 90);
m = map(flexRead_m, 515, 795, 1, 90);
r = map(flexRead_r, 535, 825, 1, 90);
i = constrain(i, 0, 90);
m = constrain(m, 0, 90);
r = constrain(r, 0, 90);
}
char logic(){
if (i > 60 && m > 40 && r > 65) //human takes stone, robot takes paper
return('a');

if (i < 50 && m < 45 && r < 45) //human takes paper, robot takes scissor
return('b');

if (i < 50 && m < 45 && r > 65) //human takes scissor, robot takes stone
return('c');
}



