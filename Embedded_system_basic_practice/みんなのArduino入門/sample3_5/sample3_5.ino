
void setup() {                
  Serial.begin(9600); //シリアル通信速度設定     
}
void loop() {
  static int i=0;       // 静的変数iの宣言（初期値=0)
  Serial.println(i++); // iの印刷後カウントアップ
  delay(1000);
}


