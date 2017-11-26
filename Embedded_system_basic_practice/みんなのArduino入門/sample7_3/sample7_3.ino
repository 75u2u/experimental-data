void setup(){
  Serial.begin(9600);
  unsigned long TMS = 10;// unit32_t TMS=10;でも正しい
  Serial.print(TMS);
  Serial.println( " SECONDS(sec)");
  TMS = TMS*1000;  // ミリ秒に変換
  static unsigned long tm= millis();// static unit32_t tm= millis(); でも正しい
  int i=0;
  char pr[20];
  while(tm+TMS>millis()) {
    while(tm+TMS*i/10>millis());
    sprintf(pr," count: %2d/10 : %3d sec",i,TMS*i/10000);
    Serial.println(pr);
    i++;
  }
  pinMode(9,OUTPUT); //ブザーのピン接続「D9」
  while(1) {
    tone(9,256,500);
    delay(1000);
  }
}
void loop() {}



