#include "mergesort.h"
#include "error.h"

/* First creates an array a of size n */
int array_create(struct array_t* a, unsigned int n ) {

  printf("Creating arrary of size %d \n",n);
  a->array = (int*)malloc(n*sizeof(int));
  if (a->array==0) {
    print_error(MEMORY_ALLOCATION);
  } else {
    a->size = n;
  }
  
  
  return(  (a->array==0) ? 0 :  1);
}

/* Initializing the array according to p */
void array_init(struct array_t* a, int p) {

  printf("Initializing arrary  \n");
  int k;
  for (k=0;k<a->size;k++) {
    a->array[k]=(k*p)%a->size;
  }  
}  

/* Prints the elements of array a */
void array_print(struct array_t* a) {
  
  printf("Printing array elements... \n");
  int k;
  for (k=0;k<a->size;k++) {
    printf("array[ %d ] = %d \n",k,a->array[k]);
  }
}

void array_sort(struct array_t* a) {

  printf("Sorting array \n");
  struct array_t* temp;
  temp = (struct array_t*)malloc(sizeof(struct array_t));
  array_create(temp,a->size);
  temp->size = a->size;
  merge_sort(a->array,temp->array, 0, a->size-1);
}

void merge_sort(int a[],int temp[], int l, int r) {
  int m;
  if (r>l) {
    m = (r+l)/2;
    merge_sort(a,temp,l,m);
    merge_sort(a,temp,m+1,r);
    merge(a,temp,l,m+1,r);
  }

}


static void merge(int numbers[], int temp[], int left, int mid, int right) {

  int i, left_end, num_elements, tmp_pos;
 
  left_end = mid - 1;
  tmp_pos = left;
  num_elements = right - left + 1;
 
  while ((left <= left_end) && (mid <= right))
  {
    if (numbers[left] <= numbers[mid])
    {
      temp[tmp_pos] = numbers[left];
      tmp_pos = tmp_pos + 1;
      left = left +1;
    }
    else
    {
      temp[tmp_pos] = numbers[mid];
      tmp_pos = tmp_pos + 1;
      mid = mid + 1;
    }
  }
 
  while (left <= left_end)
  {
    temp[tmp_pos] = numbers[left];
    left = left + 1;
    tmp_pos = tmp_pos + 1;
  }
  while (mid <= right)
  {
    temp[tmp_pos] = numbers[mid];
    mid = mid + 1;
    tmp_pos = tmp_pos + 1;
  }
 
  for (i=0; i < num_elements; i++)
  {
    numbers[right] = temp[right];
    right = right - 1;
  }
}


