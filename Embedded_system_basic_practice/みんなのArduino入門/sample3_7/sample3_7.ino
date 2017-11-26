void setup() {                
  Serial.begin(9600);       //シリアル通信速度設定   
  for( int i=0; i<10; i++) {
    Serial.println( i );    // iの値を表示後改行
  }
}
void loop() { }






