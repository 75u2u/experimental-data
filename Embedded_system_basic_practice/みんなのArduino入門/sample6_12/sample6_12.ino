#include <Wire.h> //　I2C-LCD で利用するライブラリ（必須）
void setup() { 
  pinMode(A2,OUTPUT);//VddPin
  digitalWrite(A2,HIGH);
  pinMode(A3,OUTPUT);//GNDPin
  digitalWrite(A3,LOW);
  delay(100);//待機時間（必須）
  lcd_init();// I2C LCD 初期化
  lcd_setCursor(0,0); // タイトル文字のカーソル位置設定
  lcd_printStr("** Count");//1行目のタイトル文字列表示
  delay(1000);
}
void loop() {
  static int i=0;//カウント数
  char pr[8];   //カウント数表示する文字列バッファ
  lcd_setCursor(0,1);// カウント数表示のカーソル位置設定
  sprintf(pr," No.%4d",i++); //カウント数の文字列化
  lcd_printStr(pr); // カウント数の表示
  delay(100);
}


