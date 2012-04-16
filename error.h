
#ifndef ERROR_H
#define ERROR_h


#include <stdio.h>


enum error_t {
  MEMORY_ALLOCATION
};
void print_error(enum error_t);

#endif 
