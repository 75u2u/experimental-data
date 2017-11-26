#define DX 12           // スピーカ（D12）設定
void setup()
{ pinMode(DX,OUTPUT);}  // デジタル出力定義
void loop()
{ 
  spkAlarm();           // アラーム関数呼び出し
  delay(500);
}
void spkAlarm() {       // アラーム関数
  for(int i=0; i<10; i++) {
    digitalWrite(DX,HIGH);
    delay(1);
    digitalWrite(DX,LOW);
    delay(1);
  }
}



