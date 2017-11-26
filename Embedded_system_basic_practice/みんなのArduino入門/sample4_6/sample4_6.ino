void setup(){
  pinMode(2, INPUT_PULLUP);// タクトスイッチD2接続
  pinMode(13,OUTPUT);
}
boolean sw=false;    // LEDの点滅のスイッチ（初期値：消灯）
void loop(){
  while(digitalRead(2)==LOW) {   // タクトスイッチが押された状態の判定
    if( sw ) digitalWrite(13,LOW);
    else digitalWrite(13,HIGH);
    sw = !sw;        // LEDの点滅のスイッチ切り替え
  }
}


