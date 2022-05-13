#include <stdio.h>
#include <string.h>

char values[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G'
  ,'H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void convertir(int i, char s[], int b) {
  char aux[30];
  int resto,c,indice = 0;
  while(i != 0){
      resto = i % b;
      i = i / b;
      c = values[resto];
      aux[indice] = c;
      indice++;
  }
  /* aux[indice] = '\0'; */
  indice = 0;
  /* printf("%zu\n", strlen(aux)); */
  for(int i = strlen(aux); i >= 0; i--){
      s[indice] = aux[i];
      printf("%c",s[indice]);
      indice++;
  }
}

int main(){
  int i = 54325, b = 16;
  char s[40]; 
  convertir(i,s,b);
  printf("%c\n", values[30]);
  return 0;
}
