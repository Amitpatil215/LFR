
//Testing code for IR Array
void setup(){
pinMode (10, INPUT);
pinMode (11, INPUT);
pinMode (2, INPUT);
pinMode (4, INPUT);
pinMode (7, INPUT);
pinMode (8, INPUT);
Serial.begin(9600);
}
void loop(){
int s1,s2,s3,s4,s5,near;
//change s1 and s2
s1=digitalRead(10);
s2=digitalRead(11);
s3=digitalRead(2);
s4=digitalRead(4);
s5=digitalRead(7);
near=digitalRead(8);
Serial.print(s1);
Serial.print("--");
Serial.print(s2);
Serial.print("--");
Serial.print(s3);
Serial.print("--");
Serial.print(s4);
Serial.print("--");
Serial.print(s5);
Serial.print("--");
Serial.print("-Near ditected..-");
Serial.print(near);
Serial.print("--");
delay(200);
//1-white
//0-black
}
