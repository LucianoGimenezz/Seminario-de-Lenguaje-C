#include <stdio.h>

struct {
  int x;
  int y;
} n;

int main(void){
  printf("Size of n.x %zu\n",sizeof(n.x));
  printf("Size of n.y %zu\n",sizeof(n.y));
  printf("Size of n %zu\n",sizeof(n));
  return 0;
}
