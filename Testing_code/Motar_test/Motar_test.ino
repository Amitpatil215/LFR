
//Testing code for Motar
void setup(){
pinMode (3, OUTPUT);
pinMode (5, OUTPUT);
pinMode (9, OUTPUT);
pinMode (6, OUTPUT);
Serial.begin(9600);
}
void loop(){
  //forward both wheels full speed
   //left wheel forward
      analogWrite(3,255);
      analogWrite(5,255);
  //right wheel forward
       analogWrite(9,255);
       analogWrite(6,255);
  //----------------------------------------
  //backword both wheels on full speed-check accordingly
     //left wheel backward
      analogWrite(3,255);
      analogWrite(5,255);
  //right wheel backward
       analogWrite(9,255);
       analogWrite(6,255);
       
  //--------------------------------------------------
  
  

}
