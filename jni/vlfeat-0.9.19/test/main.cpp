#include <stdio.h>

extern "C" {
  #include "vl/generic.h"
}

int main (int argc, const char * argv[]) {
  VL_PRINT ("Hello world!") ;
  return 0;
}


