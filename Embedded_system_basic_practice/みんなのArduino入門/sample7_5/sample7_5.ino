void setup(){
  pinMode(2,INPUT_PULLUP); // 割込みピン（タクトスイッチ）
  pinMode(13,OUTPUT); // Arduino 上のLED 
  attachInterrupt(0,buzzer,CHANGE); //割込み処理関数
}
void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
void buzzer(){
  pinMode(9,OUTPUT);
  tone(9,255,1000);
}

