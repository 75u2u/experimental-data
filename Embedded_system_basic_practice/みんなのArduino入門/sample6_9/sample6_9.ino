#define PIN A0 // 送受信ピン
#define CTM 10  // HIGHの時間（μ秒）
void setup() {
  Serial.begin (9600);
  pinMode(A1,OUTPUT);//A1ピンを電源（５V)設定
  digitalWrite(A1,HIGH);
  pinMode(A2,OUTPUT);//A2ピンをGND設定
  digitalWrite(A2,LOW);
}
void loop() {
  int dur;    // 時間差（μ秒）
  float dis;  // 距離（ｃｍ）
  pinMode(PIN,OUTPUT);
  digitalWrite(PIN, HIGH);
  delayMicroseconds(CTM);
  digitalWrite(PIN, LOW);
  pinMode(PIN,INPUT);
  dur = pulseIn(PIN, HIGH); // HIGHになる待ち時間の計測
  dis  = (float)dur*0.017;
  Serial.print(dis);
  Serial.println(" cm");
  delay(200);
}

