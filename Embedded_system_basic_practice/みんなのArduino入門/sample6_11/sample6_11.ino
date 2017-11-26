#define DUR 200 //　音の長さ  

float Vcc=5.0;  //  距離センサーの外部電圧
// 音階の周波数（Hz)ドレミ・・・
int fq[]={262,294,330,349,392,440,494,523}; 

void telmin(int dist) {//テルミン
  int i=dist/10; if(i>7) i=7;
  tone(12,fq[i],DUR);  // D12とGNDに挿した圧電スピーカ
  delay(DUR);
}

void setup() { }

void loop() {
 float Vout = Vcc*analogRead(0)/1023; // A0で出てくる電圧
 float cm = 26.549*pow(Vout,-1.2091);
 telmin((int)cm);
}

