#include <stdio.h>

int getDiv(int a, int b){
  if((a > b) & (b != 0)) return a / b;
  else if((a < b) & (a != 0)) return b / a;
  else if((a == b) & (a != 0)) return 1;
  else return -1;
}

int main(){
  double resultado = getDiv(29,5);
  if(resultado != -1){
    printf("El resultado de la division es %.2f\n", resultado);
  }else printf("No se puede dividir entre cero\n");	
}
