#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"
#include "args_process.h"
#include "error.h"



int main (int argc, char **argv)
{
  
  printf("Merge Sort \n");
  
 
  /* Process argumets */
  struct args_t* args;
  args = (struct args_t*)malloc(sizeof(struct args_t));
  if (args==0) {
    print_error(  MEMORY_ALLOCATION);
    return 1;
  }
  args_process (argc, argv, args);

  /* Create array */
  struct array_t* int_array;
  int_array = (struct array_t*)malloc(sizeof(struct array_t));
  if (!array_create(int_array,args->size)) return 1;

  /* Initialize array */
  array_init(int_array,args->p);
  
  /* Print array values */
  /* array_print(int_array);  */

  /* Sort array */
  array_sort(int_array);
  
  /* Print array values */
  /* array_print(int_array); */
  return 0;

}
