#include <stdio.h>
int main(){
  char *arr1 = "Hola mundo";
  char arr2[20];

  printf("%d\n", sizeof(arr1)); //Imprime 8
  printf("%d\n", sizeof(arr2)); //Imprime 20
  return 0;
}
