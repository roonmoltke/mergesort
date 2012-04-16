
#ifndef ARGS_PROCESS_H
#define ARGS_PROCESS_h

#include <stdio.h>
#include <stdlib.h>

struct args_t {
  int p;
  unsigned int size;
  unsigned int stdout;
};

void args_process (int, char**, struct args_t*);



#endif 
