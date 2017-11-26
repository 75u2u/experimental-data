void setup(){
  Serial.begin(9600);  //シリアル通信速度設定
  int f;    // 華氏温度変数定義
  float c;  // 摂氏温度変数定義
  for( int f=0; f<100; f+=10 ) {//華氏温度を0から100まで10刻みでカウントアップ
    c = ctemp((float)f);        //華氏温度から摂氏温度への変換式の関数利用
    Serial.print( f ); Serial.print(" F : ");      //華氏温度表示
    Serial.print( c ); Serial.println(" C");      //摂氏温度表示
  }
}
void loop() { }
float ctemp(int ft) {      //華氏温度から摂氏温度への変換式関数
  return ( 5.0/9.0*(ft-32.0));
}



