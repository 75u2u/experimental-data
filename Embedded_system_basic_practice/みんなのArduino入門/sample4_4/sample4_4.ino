void setup(){
  Serial.begin(9600); 
}
void loop() {
float vt = (float)analogRead(A0) / 1023.0 * 5.0; // 5V系Arduinoの場合
Serial.println(vt);
delay(1000);
}

