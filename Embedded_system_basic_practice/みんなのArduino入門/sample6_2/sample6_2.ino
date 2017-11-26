void setup()
{
  pinMode(A0, OUTPUT);  // A0(LM61BIZ - GND)
  digitalWrite(A0, LOW);
  pinMode(A2, OUTPUT);  // A2(LM61BIZ - VSS+)
  digitalWrite(A2, HIGH);
  Serial.begin(9600);
}
int getTemp(void) //温度センサ読み取りおよび変換式関数
{
  int mV = analogRead(A1) * 4.88;
  return (mV - 600);  
}
void loop()
{
  int temp = getTemp();
  char body[20];
  sprintf(body, "temp= %d.%d C", temp/10, temp%10);//文字列連結関数
  Serial.println(body);
  delay(1000);  // 待機時間
}

