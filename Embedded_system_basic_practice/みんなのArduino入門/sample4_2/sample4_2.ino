void setup(){
  Serial.begin(9600); 
}
void loop() {
 Serial.println(analogRead(A0)); // アナログA0の値表示
 delay(1000);
}


