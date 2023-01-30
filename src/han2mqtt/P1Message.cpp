#include "P1Message.h"
#include <stdio.h>
#include <stdlib.h>

P1Message::P1Message(char* msg, char* crc) {
  _msg = msg;
  _crc = crc;
}

double P1Message::getTotalConsumption() {
  char buf[12];
  int result2 = sscanf(_msg, "%*1-0:2.8.0(%[^*]", buf);

  return atof(buf);
}

char* P1Message::getCSV(){
  return _msg;
}
