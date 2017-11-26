void setup(){
pinMode(12,OUTPUT); //ブザーの端子を出力にする
}
void loop(){
for(int i=0; i<528; i++){ //ドの音(1056Hz の周波数)を528 回繰り返す
digitalWrite(12,HIGH);
delayMicroseconds(473);
digitalWrite(12,LOW);
delayMicroseconds(473);
}
for(int i=0; i<588; i++){ //レの音(1176Hz の周波数)を588 回繰り返す
digitalWrite(12,HIGH);
delayMicroseconds(425);
digitalWrite(12,LOW);
delayMicroseconds(425);
}
for(int i=0; i<660; i++){ //ミの音(1320Hz の周波数)を660 回繰り返す
digitalWrite(12,HIGH);
delayMicroseconds(379);
digitalWrite(12,LOW);
delayMicroseconds(379);
}
}

