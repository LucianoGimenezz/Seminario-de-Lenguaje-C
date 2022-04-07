#include<stdio.h>

int main(){
  int x, y;
  scanf("%d", &x);  /* devuelve la cantidad de valores leidos o 0 */
  printf("El valor de x es %d\n", x);
  
  scanf("%d  %d", &x, &y);
  printf("El valor de x e y  es  %d, %d\n", x, y);
  
  scanf("%d %d", &x, &y);
  printf("El valor de x e y es %d, %d\n", x, y);
  return 0;
}
