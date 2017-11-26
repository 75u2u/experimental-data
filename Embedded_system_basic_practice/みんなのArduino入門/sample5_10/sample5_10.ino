void setup() { }
void loop() {
   for(int i=0; i<256; i += 1) {
     analogWrite(9,255+i);//PWMによるアナログ出力
     delay(100);
   }
   delay(1000);
}

