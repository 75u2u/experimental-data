void setup(){
  Serial.begin(9600);
  pinMode(8,INPUT_PULLUP); // INPUT ⇒ INPUT_PULLUPに変更
}
void loop(){
  Serial.println(digitalRead(8)); //デジタルD8の値表示
  delay(1000);
}

