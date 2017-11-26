char pr[30];
void setup()      // sprintf関数のサンプル出力テスト
{  Serial.begin(9600);
   sprintf(pr,"%c,%s,'%5x',%2d.%2d",'A',"BCDE",2013,15,21);
   Serial.print(pr); }
void loop() {}

