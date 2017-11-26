void setup(){
  pinMode(2, INPUT_PULLUP);  // タクトスイッチの設定D0
  pinMode(13,OUTPUT);        // Arduino上のLED(D13)設定
}
void loop(){
  if( digitalRead(2)==HIGH)  digitalWrite(13,LOW); //タクトスイッチOff
  else digitalWrite(13,HIGH);                      //タクトスイッチOn
}


