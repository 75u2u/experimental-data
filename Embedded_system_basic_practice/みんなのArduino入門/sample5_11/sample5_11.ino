void setup() { }
void loop() {
   int v = analogRead(A4);      // 可変抵抗値読み込み
   analogWrite(9,v/1023.0*255); // PWMによるアナログ出力
   delay(100);
}

