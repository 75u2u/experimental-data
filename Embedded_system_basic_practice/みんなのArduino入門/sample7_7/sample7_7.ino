#include <SoftwareSerial.h>       //ソフトウェアシリアル通信ライブラリの設定
SoftwareSerial No2Arduino (2, 3);  // 受信側RX：D2，送信側TX：D3に設定

void setup(){
  No2Arduino.begin(9600);        // ArduinoNo1との通信速度設定
  Serial.begin(9600);               // シリアルモニタ画面への表示通信速度設定
  Serial.println("Arduino No2 print"); // ArduinoNo2からの送信の表記文字
}
void loop(){
  if(No2Arduino.available()) 
    Serial.write(No2Arduino.read()); // ArduinoNo2で受信した文字をシリアルモニタ画面表示
}



