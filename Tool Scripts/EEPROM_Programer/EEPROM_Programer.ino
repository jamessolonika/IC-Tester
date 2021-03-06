
/******************************
James Solonika

Portland Community College
EET 256
Spring 2015
Capstone Project

EEPROM Programer:
Stores logic tables to the EEPROM
*******************************/
#include <EEPROM.h>

const int AND_Table[256] = {
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  4,4,4,5,4,4,4,5,4,4,4,5,6,6,6,7,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  4,4,4,5,4,4,4,5,4,4,4,5,6,6,6,7,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  0,0,0,1,0,0,0,1,0,0,0,1,2,2,2,3,
  4,4,4,5,4,4,4,5,4,4,4,5,6,6,6,7,
  8,8,8,9,8,8,8,9,8,8,8,9,10,10,10,11,
  8,8,8,9,8,8,8,9,8,8,8,9,10,10,10,11,
  8,8,8,9,8,8,8,9,8,8,8,9,10,10,10,11,
  12,12,12,13,12,12,12,13,12,12,12,13,14,14,14,15
};

const int OR_Table[256] = {
  0,1,1,1,2,3,3,3,2,3,3,3,2,3,3,3,
  4,5,5,5,6,7,7,7,6,7,7,7,6,7,7,7,
  4,5,5,5,6,7,7,7,6,7,7,7,6,7,7,7,
  4,5,5,5,6,7,7,7,6,7,7,7,6,7,7,7,
  8,9,9,9,10,11,11,11,10,11,11,11,10,11,11,11,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  8,9,9,9,10,11,11,11,10,11,11,11,10,11,11,11,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  8,9,9,9,10,11,11,11,10,11,11,11,10,11,11,11,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15,
  12,13,13,13,14,15,15,15,14,15,15,15,14,15,15,15
};



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print('\n');
  Serial.print('\n');
  Serial.print('\n');
  
  for (int i = 0; i < 256; i++)
   {
 
     EEPROM.write(i, AND_Table[i]);
     
     Serial.print(i);
     Serial.print("-");
     Serial.print(AND_Table[i]);
     Serial.print("-");
     Serial.print(EEPROM.read(i));
     
     EEPROM.write(i + 256, OR_Table[i]);
     
     Serial.print('\t');
     Serial.print(i+256);
     Serial.print("-");
     Serial.print(OR_Table[i]);
     Serial.print("-");
     Serial.print(EEPROM.read(i+256));
     Serial.print('\n');
     
   }

}

void loop() {
  // put your main code here, to run repeatedly:

}
