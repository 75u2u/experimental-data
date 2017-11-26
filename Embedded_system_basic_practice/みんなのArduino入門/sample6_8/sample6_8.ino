#define TRIGPIN 8  // トリガー（送信側））ピン
#define ECHOPIN 9  // エコー（受信側）ピン
#define CTM 10     // HIGHの時間（μ秒）
void setup() {
  Serial.begin (9600);
  pinMode(TRIGPIN, OUTPUT);// トリガーピンのデジタル出力設定
  pinMode(ECHOPIN, INPUT); // エコーピンのデジタル入力設定
}
void loop() {
  int dur;    // 時間差（μ秒）
  float dis;  // 距離（ｃｍ）
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(CTM);
  digitalWrite(TRIGPIN, LOW);
  dur = pulseIn(ECHOPIN, HIGH); // HIGHになる待ち時間の計測
  dis  = (float) dur*0.017;     // 音速による距離計算
  Serial.print(dis);
  Serial.println(" cm");
  delay(500);
}

