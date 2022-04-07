#include<stdio.h>
/* wc -c imprime la cantidad de bytes de un archivo
 * wc -l imprime la cantidad de lineas de un archivo
 * */

int main(){
  int total = 0;
<<<<<<< HEAD
  int c ;
=======
  int c;
>>>>>>> 3589a7e (update)
  c = getchar();
  while(c != EOF){
      putchar(c);
      total++;
      c = getchar();
  }
  printf("La cantidad de caracteres y lineas fueron de: %d\n", total);
  return 0;
}
