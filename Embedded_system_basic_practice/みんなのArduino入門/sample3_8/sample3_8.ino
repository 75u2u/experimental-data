
void setup() {                
  Serial.begin(9600); //シリアル通信速度設定     
  int i=2;
  do { Serial.println(i--); // do-while内でカウントダウン
  } while(i>0);
  Serial.println("--------");
  while(i<0) {
    Serial.println(i++);    // while内でカウントアップ
  }
  Serial.println("--end--");
}
void loop() { }


