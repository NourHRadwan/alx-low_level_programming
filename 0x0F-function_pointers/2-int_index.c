#include <stdio.h>
#include "function_pointers.h"

/**
  *int_index function with 3 arguments
  *Description: search for int
  *@array: int type, pointer to array.
  *@size: int type
  *@cmp : a function pointer
  *Return int value
  */
int int_index(int *array, int size, int (*cmp)(int)){
int i, ind;
if(size <= 0){
return(-1);
}
if(cmp && array){
for(i=0; i<size;i++){
ind = cmp(array[i]);
if(ind != 0){
return(i);}
}
}
else
return(-1);
}
