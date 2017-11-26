
int led = 13;
int mtime = 500;   //  変数mtimeに500を初期設定
void setup() {                
  pinMode(led, OUTPUT);     
}
void loop() {
  if( mtime <= 0 ) { 
    mtime = 500; 
  }  // mtime が０以下の場合、再度500に設定
  else { 
    mtime -= 50; 
  }              // mtime がそれ以外の場合、50を引く
  digitalWrite(led, HIGH);           // LED点灯
  delay(500 - mtime);                // LED点灯の時間
  digitalWrite(led, LOW);            // LED消灯
  delay(mtime);                      // LED消灯の時間
}




