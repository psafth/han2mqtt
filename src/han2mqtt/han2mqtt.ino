#include "P1Message.h"

void setup() {
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void serialEvent() {
  while (Serial.available()) {
    Serial.println("Available");

    String strMessage = Serial.readStringUntil('!');
    String strCrc = Serial.readStringUntil('\n');

    char msgBuffer[strMessage.length()+1];
    char crcBuffer[strCrc.length()+1];

    strMessage.toCharArray(msgBuffer, sizeof(msgBuffer));
    strCrc.toCharArray(crcBuffer, sizeof(crcBuffer));

    Serial.println(crcBuffer);


    P1Message msg(msgBuffer, crcBuffer);
    double dMsg = msg.getTotalConsumption();
    char* strMsg = msg.getCSV();

    Serial.println(dMsg);
    //Serial.println(crc);
  }


  Serial.println("Done!");
}
