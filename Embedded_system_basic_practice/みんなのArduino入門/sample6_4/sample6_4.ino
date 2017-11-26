void setup() 
{   Serial.begin(9600); }
void loop()
{ char pr[12];
  sprintf(pr, "Light = %d", analogRead(A0));
  Serial.println(pr);
  delay(100);//待機時間0.1秒
}


