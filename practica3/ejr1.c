#include<stdio.h>
int main() {
  int info;
    while((info = getchar()) != EOF){
      printf("%c", info);
    }
  return 0;
}
