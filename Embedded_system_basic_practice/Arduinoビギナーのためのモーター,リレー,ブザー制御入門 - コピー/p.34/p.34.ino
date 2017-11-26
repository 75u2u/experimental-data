void setup(){
pinMode(10, OUTPUT);
}
void loop(){
for(int i=0; i<40; i++){
digitalWrite(10,HIGH);
delayMicroseconds(900);
digitalWrite(10,LOW);
delay(19);
}
delay(3000);
for(int i=0; i<40; i++){
digitalWrite(10,HIGH);
delayMicroseconds(2100);
digitalWrite(10,LOW);
delay(18);
}
delay(3000);
}
