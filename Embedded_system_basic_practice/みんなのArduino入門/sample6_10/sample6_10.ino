float Vcc = 5.0;// 電圧（５V)
float dist;

void setup()	
{
  Serial.begin(9600);
}
void loop()
{  dist = Vcc*analogRead(A0)/1023;
   dist = 26.549*pow(dist,-1.2091);//2行にまたがる距離計算式
   Serial.print( " Dist = ");
   Serial.print(dist ); 
 Serial.println(" cm ");
 delay(300);
}

