#include "error.h"




void print_error(enum error_t error){ 

  switch(error) {
  case MEMORY_ALLOCATION :
    printf("Memory Allocation Failure");
    break;
  default:
    break;
  }
}
