#include <stdio.h>
#include <ctype.h>

char charToUpper(char x){
  char resultado = toupper(x);
  return resultado;
}

int main(){
  char caracter = 'z';
  char upperChar = charToUpper(caracter);
  printf("El caracter %c, se convirtio en %c\n", caracter, upperChar);
  return 0;
}
