#include <stdio.h>

int esDigito(char digito){
  if((digito >= '0') && (digito <= '9')) return 1;
  else return 0;
}

int main(){
  char n = 'a';
  int result = esDigito(n);
  if(result != 0) printf("El character n es un digito\n");
  else printf("El character n no es un digito\n");
  return 0;
}
