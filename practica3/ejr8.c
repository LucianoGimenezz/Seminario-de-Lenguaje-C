#include<stdio.h>
#include<string.h>

int print_cadena_recursiva(char *c,int size){
  if(!size){
    return 1;
  }else {
    printf("%c", *c);
    print_cadena_recursiva(c-1, size-1);
  }
  return 0;
}

void print_cadena(char *c, int size){
  for(int i = 0; i < size; i++){
      char x = *c;
      printf("%c", x);
      c = c - 1;
  }
  printf("\n");
}

int main(void){
  char cadena[] = "Hello world";
  int size = strlen(cadena);
  printf("Imprimimos con funcion iterativa: \n");
  print_cadena(cadena+(size-1),size);
  printf("Imprimimos con funcion recursiva: \n");
  print_cadena_recursiva(cadena+(size-1), size);
  printf("\n");
  return 0;
}
