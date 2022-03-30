#include <stdio.h>

double getProm(int a, int b){
  int sum = a + b;
  double prom = sum / 2;
  return prom;
}

int main(){
  int x = 5;
  int y = 10;
  double resultado = getProm(x, y);
  printf("El promedio de %d y %d, es %.2f\n", x,y,resultado);
}
