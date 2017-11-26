void setup(){
pinMode(12,OUTPUT); //ブザーの接続されたピンを出力にする
}
void loop(){
digitalWrite(12, HIGH); //ブザーのピンをH にする
delay(1);
digitalWrite(12, LOW); //ブザーのピンをL にする
delay(1);
}
