#include <Wire.h> //　I2C-LCD で利用するライブラリ
#define SIGPin 8   // 超音波距離センサの送受信ピン
#define VCCPin 9  //  超音波距離センサの電源ピン
#define GNDPin 10 // 超音波距離センサのGNDピン
#define CTM 10    // HIGHの時間（μ秒）
void setup() {
  pinMode(VCCPin,OUTPUT);//超音波距離センサ 電源設定
  digitalWrite(VCCPin,HIGH);
  pinMode(GNDPin,OUTPUT); //超音波距離センサ GND設定
  digitalWrite(GNDPin,LOW);
  pinMode(A2,OUTPUT); // I2C-LCD 電源設定
  digitalWrite(A2,HIGH);
  pinMode(A3,OUTPUT); // I2C-LCD GND設定
  digitalWrite(A3,LOW);
  delay(100); //待機時間（必須）
  pinMode(13,OUTPUT); // LED設定
  pinMode(12,OUTPUT); // ブザー設定
  lcd_init(); //I2C-LCD初期化
  lcd_setCursor(0,0);
  lcd_printStr(" Dist ");
  delay(1000);  
}

void loop() {
  int dur;    // 時間差（μ秒）
  int dis;  // 距離（ｃｍ）
  pinMode(SIGPin,OUTPUT);
  digitalWrite(SIGPin, HIGH);
  delayMicroseconds(CTM);
  digitalWrite(SIGPin, LOW);
  pinMode(SIGPin,INPUT);
  dur = pulseIn(SIGPin, HIGH); //　戻り時間の計測
  dis  = (int)dur*0.017;
  char pr[8];
  sprintf(pr,"%4d cm", dis);
  lcd_setCursor(0,1);
  lcd_printStr(pr);
  if (dis<10) { tone(12,500,50); digitalWrite(13,HIGH); }//10㎝閾値内でブザー・LEDオン
  else { noTone(12); digitalWrite(13,LOW); }            //それ以外ではオフ
  delay(50);
}

