
#ifndef MERGESORT_H
#define MERGESORT_h

#include <stdlib.h>
#include <stdio.h>
/* #include "error.h" */


struct array_t {
  int* array;
  unsigned size;

};

int array_create(struct array_t*,unsigned int);
void array_init(struct array_t*,int);
void array_print(struct array_t*);
void array_sort(struct array_t*);
void merge_sort(int*,int*,int,int);
static void merge(int*,int*,int,int,int);





#endif 
