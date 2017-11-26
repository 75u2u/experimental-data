void setup() {
}
void loop() {
  for (int x =0; x<256; x++) {
    analogWrite(9,x);//PWMによるアナログ出力
    delay(10);
  }
  for(int x=255; x>=0; x--) {
    analogWrite(9,x);//PWMによるアナログ出力
    delay(10);
  }
}

