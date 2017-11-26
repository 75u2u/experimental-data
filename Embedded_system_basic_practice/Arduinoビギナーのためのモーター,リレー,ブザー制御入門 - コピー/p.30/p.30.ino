void setup(){
pinMode(9,OUTPUT);
digitalWrite(9,LOW);
}
void loop(){
for(int rev = 140; rev >80; rev--){
analogWrite(11,rev);
delay(200);
}
analogWrite(11,0);
delay(1000);
}
