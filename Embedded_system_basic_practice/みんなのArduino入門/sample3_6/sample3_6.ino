
void setup() {                
  Serial.begin(9600); //シリアル通信速度設定     
}
void loop() {
  char ch = Serial.read(); // キーボードからの読み込み
  switch( ch ) { 
  case 'a': 
    Serial.print('A');//小文字'a'を大文字に変換して表示
    break;
  case 'b':
    Serial.print('B');//小文字'b'を大文字に変換して表示
    break;
  }
}


