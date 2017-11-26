void setup() {
  Serial.begin(9600);  
}
void loop() {
  int val = analogRead(A0);
  float cel = (float)val*500.0/1024.0-60.0;  // 温度（摂氏　単位℃）の計算
  Serial.print ( "Celsius = "); 
  Serial.print ( cel );  
  Serial.print ( " / Fahrenhit =");
  Serial.println ( (cel * 9)/ 5 + 32 ) ;    // 温度（華氏　単位F）の計算 
  delay(1000);                   
}

