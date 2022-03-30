#include <stdio.h>

int getFactorial(int n){
  int factorial = 1;
  for(int i = 1; i <= n; i++){
    factorial = factorial * i;
  }
  return factorial;
}

int main(){
  int n = 5;
  int resultado = getFactorial(n);
  printf("El factorial de %d, es %d\n", n, resultado);
  return 0;
}
