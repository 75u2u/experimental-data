void setup() {
pinMode(13, OUTPUT);   // D13をデジタル出力に設定
}		
void loop() {
digitalWrite(13, HIGH);     // LEDを点灯
delay(8);                   // 8ミリ秒待機
digitalWrite(13, LOW);      // LEDを消灯
delay(2);                   // 2ミリ秒待機
}

