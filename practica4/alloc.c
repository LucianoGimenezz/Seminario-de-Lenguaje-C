#include<stdio.h>
#include "./ejercicio4.h"
#include<stdlib.h>

int main(void){
  int *x;
  allocMem(x);
  *x = 10;
  printf("%d\n",*x);
  free(x);
  return 0;
}
