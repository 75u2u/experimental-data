void setup() {
  pinMode(13, OUTPUT);   // D13をデジタル出力に設定
}	

void loop() {
  for(int x=0; x<10; x++) {
    for(int i=0; i<10; i++) {
      digitalWrite(13, HIGH);     // LEDを点灯
      delay(x);                   // 徐々に長く
      digitalWrite(13, LOW);      // LEDを消灯
      delay(9-x);                 // 徐々に短く
    }
  } 
}

