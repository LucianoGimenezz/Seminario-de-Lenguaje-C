#include <stdio.h>

int min(int x,int y){
  int result = (x > y) ? y : x;
  return result;
}

int main(){
  int x = 34;
  int y = 10;
  int result = min(x, y);
  printf("El valor minimo entre %d y %d, es %d\n", x, y, result);
  return 0;
}
