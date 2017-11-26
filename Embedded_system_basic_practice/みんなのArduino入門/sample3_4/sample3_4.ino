
#define LED 13            // プリプロセッサによるLED設定
void setup() {                
  pinMode(led, OUTPUT);     
}
void loop() {
  digitalWrite(LED, HIGH);// LEDが13に置換される
  delay(1000);
  digitalWrite(LED, LOW);// LEDが13に置換される
  delay(1000); 
}


