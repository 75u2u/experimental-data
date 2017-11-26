#include <EEPROM.h> // EEPROM.hの読み込み宣言
void setup(){
  Serial.begin(9600);
  byte val = EEPROM.read(0);// EEPROMからの読み込み
  Serial.print("Memory value: ");
  Serial.println(val);
  EEPROM.write(0,++val); // EEPROMへの書き込み
}
void loop(){}


