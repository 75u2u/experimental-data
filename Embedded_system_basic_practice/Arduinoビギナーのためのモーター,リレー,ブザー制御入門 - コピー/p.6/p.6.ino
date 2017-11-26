void setup(){
pinMode(13, OUTPUT); //13 番ピンを出力にする
}
void loop(){
digitalWrite(13, HIGH); //13 番ピンからHIGH を出力
delay(500);
digitalWrite(13, LOW); //13 番ピンからLOW を出力
delay(500);
}

