void setup(){
  Serial.begin(9600); //Arduino No2との通信速度設定
  pinMode(A0, OUTPUT); //A0に温度センサ「GND」ピン設定
  digitalWrite(A0,LOW);
  pinMode(A2, OUTPUT); //A2に温度センサ「５V」ピン設定
  digitalWrite(A2,HIGH);
}
void loop() {
  float cel = ((float)analogRead(A1)/1023.0)*487.0-60.0;  //A1から温度センサ値取得
  char sc[25];
  sprintf(sc, "Arduino No1 : %d.%d C", (int)cel, (int)(cel*10)%10);
  Serial.println(sc);   // 温度センサ値を含む文字列をシリアル通信で送信
  delay(500);
}

