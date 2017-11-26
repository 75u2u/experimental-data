#define LedPin 13 
void setup() 
{  pinMode(LedPin, OUTPUT); }
void loop()
{  if ( analogRead(A0)<50) digitalWrite(LedPin,HIGH);  // 暗いとLED点灯
   else digitalWrite(LedPin,LOW);                      // 明るいとLED消灯
}

