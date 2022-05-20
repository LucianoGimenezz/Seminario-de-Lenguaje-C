#include<stdio.h>
#include<string.h>

int count_word(char *c, int size){
  int total = 0;
   do{
    if((*c == ' ') | (*c == '\0')){
      total+=1;
    }
    c+=1;
    size-=1;
  }while(size); 
  return total;
}

int main(void){
  char palabra[] = "Esto es una frase con algunas palabras para ver cuantas hay";
  int size = strlen(palabra);
  printf("La cantidad de palabras fueron: %d\n", count_word(palabra, size)+1);
  return 0;
}
