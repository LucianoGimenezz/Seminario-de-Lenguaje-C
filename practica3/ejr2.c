#include <stdio.h>
int main() {
  int cantLineas = 0,c;
  while(((c = getchar()) != EOF) & (cantLineas != 10)){
    if(c == '\n'){
      cantLineas+=1;
    }
    putchar(c);
  }
  return 0;
}
