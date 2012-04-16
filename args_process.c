#include "args_process.h"

void args_process (int argc,
		   char** argv,
		   struct args_t* args){

  printf("Processing user arguments \n");
  args->size=atoi(argv[2]);
  args->p=atoi(argv[1]);
  args->stdout=atoi(argv[3]);
}
