
// このままでは動きません

long tm = millis();  // millis()関数はArduino起動からのミリ秒時間を返す
while( 60<analogRead(A0) )
{ if( millis() - tm > 30000 ) break;




