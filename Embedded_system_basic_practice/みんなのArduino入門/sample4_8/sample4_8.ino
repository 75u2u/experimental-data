void setup(){
  pinMode(2, INPUT_PULLUP);  //チルトセンサー（D2)接続
  pinMode(13,OUTPUT);        // Arduino上のLED(D13)設定
}
void loop(){
 boolean sw=digitalRead(2);   // チルトセンサーの初期設定
 while(sw == digitalRead(2)); //チルトセンサー切替わりまで待機
 digitalWrite(13,HIGH);
 delay(3000);
 digitalWrite(13,LOW);
}

