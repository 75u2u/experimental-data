
#define DX 12
int abc[]={523,494,440,392,349,330,294,262};//ドレミの設定
//トーン設定（dx:ピン番号、hz：周波数、tm：ミリ時間）
void mtone(int dx, int hz, long tm) {
  long t=millis();
  long ns = 10000/hz*50;
  while(millis()-t<tm) {
    digitalWrite(dx,HIGH);
    delayMicroseconds(ns);
    digitalWrite(dx,LOW);
    delayMicroseconds(ns);
  }
}

void setup(){
  pinMode(DX,OUTPUT);    // スピーカのデジタル出力宣言
}
void loop(){
  for (int i=0; i<8; i++){
    mtone(DX,abc[i],500);
    delay(50);
  }
}

