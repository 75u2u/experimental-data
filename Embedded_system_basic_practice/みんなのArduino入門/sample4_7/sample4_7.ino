void setup(){
  pinMode(2, INPUT_PULLUP);//　タクトスイッチ（D2）接続
  pinMode(13,OUTPUT);        // Arduino上のLED(D13)設定
}
boolean sw=false;

void loop(){
  while( !chtsw(2) ) { // スイッチが押された状態確認
    if( sw ) digitalWrite(13,LOW);
    else digitalWrite(13,HIGH);
    sw = !sw;
  }
  while( chtsw(2) );// スイッチが離された状態確認
}

boolean chtsw(byte dx) {//チャタリングを考慮したタクトスイッチの関数
 boolean tsw = digitalRead(dx);
 while( tsw == digitalRead(dx) ) ;
 delay(300); 
 return !tsw;//押された状態=false(LOW)、離された状態=true(HIGH)
}

