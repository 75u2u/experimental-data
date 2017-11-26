void setup(){
pinMode(9, OUTPUT); //モーター制御ピンを出力にする
pinMode(11, OUTPUT);
}
void loop(){
digitalWrite(9, HIGH); digitalWrite(11, LOW); //モーターを反転
delay(1000); //1 秒待つ
digitalWrite(9, LOW); digitalWrite(11, HIGH); //モーターを正転
delay(1000); //1 秒待つ
digitalWrite(9, LOW); digitalWrite(11, LOW); //停止
delay(1000); //1 秒待つ
}
