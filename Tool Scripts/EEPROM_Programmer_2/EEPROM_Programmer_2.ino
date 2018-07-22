
/******************************
James Solonika

Portland Community College
EET 256
Spring 2015
Capstone Project

EEPROM Programer 2:
Stores logic tables to the EEPROM
*******************************/
#include <EEPROM.h>

const int NAND_Table[256] = {
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  11,11,11,10,11,11,11,10,11,11,11,10,9,9,9,8,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  11,11,11,10,11,11,11,10,11,11,11,10,9,9,9,8,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  15,15,15,14,15,15,15,14,15,15,15,14,13,13,13,12,
  11,11,11,10,11,11,11,10,11,11,11,10,9,9,9,8,
  7,7,7,6,7,7,7,6,7,7,7,6,5,5,5,4,
  7,7,7,6,7,7,7,6,7,7,7,6,5,5,5,4,
  7,7,7,6,7,7,7,6,7,7,7,6,5,5,5,4,
  3,3,3,2,3,3,3,2,3,3,3,2,1,1,1,0
};

const int NOR_Table[256] = {
  15,14,14,14,13,12,12,12,13,12,12,12,13,12,12,12,
  11,10,10,10,9,8,8,8,9,8,8,8,9,8,8,8,
  11,10,10,10,9,8,8,8,9,8,8,8,9,8,8,8,
  11,10,10,10,9,8,8,8,9,8,8,8,9,8,8,8,
  7,6,6,6,5,4,4,4,5,4,4,4,5,4,4,4,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  7,6,6,6,5,4,4,4,5,4,4,4,5,4,4,4,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  7,6,6,6,5,4,4,4,5,4,4,4,5,4,4,4,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
  3,2,2,2,1,0,0,0,1,0,0,0,1,0,0,0,
};

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    int n;
    Serial.print('\n');
    Serial.print('\n');
    Serial.print('\n');
    
  for (int i = 0; i < 256; i++)
   {
     n = i + 256 + 256;
     
     EEPROM.write(n, NAND_Table[i]);
     
     Serial.print(n);
     Serial.print("-");
     Serial.print(NAND_Table[i]);
     Serial.print("-");
     Serial.print(EEPROM.read(n));
     
     n += 256;
     EEPROM.write(n, NOR_Table[i]);
     
     Serial.print('\t');
     Serial.print(n);
     Serial.print("-");
     Serial.print(NOR_Table[i]);
     Serial.print("-");
     Serial.print(EEPROM.read(n));
     Serial.print('\n');
   }

}

void loop() {
  // put your main code here, to run repeatedly:

}