#include<stdio.h>
/* wc -c imprime la cantidad de bytes de un archivo
 * wc -l imprime la cantidad de lineas de un archivo
 * */

int main(){
  int total = 0;
  char c ;
  c = getchar();
  while(c != EOF){
      printf("El valor de c es: %c -", c);
      total++;
      c = getchar();
  }
  printf("La cantidad de caracteres y lineas fueron de: %d\n", total);
  return 0;
}
