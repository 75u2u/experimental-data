void setup() {
  pinMode(13,OUTPUT);
}
void loop() {
  static long tm=millis();    // 時刻初期化
  digitalWrite(13,HIGH);      // LED点灯
  while(tm+1000>millis());    // １秒以内
  digitalWrite(13,LOW);       //  LED消灯
  while(tm+2000>millis());    // １秒以内
  tm=tm+2000;                 // 時刻再設定
}


