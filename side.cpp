#include <stdio.h> 
#include <emscripten.h>
#include "header.h"


EMSCRIPTEN_KEEPALIVE int64_t fnLongLong(int arg, int arg1) {
  GVStruct* temp = new GVStruct;
  int64_t temp1 = 9223372036854775807 - 100;
  if (arg > 0) {
    printf("%d %p\n", arg, temp->regkey);
  }
  else 
    printf("%d 111\n", arg);
  
  delete temp;
  return arg + 9 + temp1;
}
