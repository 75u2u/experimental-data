void setup(){
pinMode(11,OUTPUT); //モーター制御用11 番ピンを出力にする
digitalWrite(11,LOW); //11 番ピンからL を出力
analogWrite(9,100); //9 番ピンからデューティ100 のPWM 信号を出力開始
delay(2000); //2 秒間待つ
analogWrite(9,0); //デューティ0 つまりPWM 信号停止
}
void loop(){
}
