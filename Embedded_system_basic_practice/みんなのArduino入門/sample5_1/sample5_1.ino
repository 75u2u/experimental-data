void setup() {
}
byte n = 5;
void loop() {
  for (int x =0; x<n; x++) {
    analogWrite(9,x*255/n);//PWMによるアナログ出力
    delay(1000);
  }
}

