#include <stdio.h>
#include <ctype.h>

int esMayu(char x){
  int result = islower(x);
  return result;
}

int main(){
  char y = 'c';
  int x = esMayu(y);
  if(x != 0 ){
    printf("EL caracter %c, es minuscula\n", y);
  }else printf("El caracter %c, es Mayuscula\n", y);
  return 0;
}
