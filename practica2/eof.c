#include<stdio.h>
#define CR '\n'

/* wc -c imprime la cantidad de bytes de un archivo
 * wc -l imprime la cantidad de lineas de un archivo
 * */

int main(){
  int nLineas, nChar = 0;
<<<<<<< HEAD
  int c ;
=======
  int c;
>>>>>>> 3589a7e (update)
  c = getchar();
  while(c != EOF){
    if(c == CR){
        nLineas++;
    }else nChar++;
    c = getchar();
  }
  printf("La cantidad de caracteres y lineas fueron de: %d, %d\n", nChar, nLineas);
  return 0;
}
