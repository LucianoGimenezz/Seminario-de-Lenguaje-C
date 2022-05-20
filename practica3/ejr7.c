#include <stdio.h>
#include <string.h>

int sumArrays(int a[], int len_a, int b[], int len_b){
  int result[1], i = 0, j = 0, totalA = 0, totalB = 0, total = 0;
  while((i < len_a) | (j < len_b)){
    if(i < len_a) {
	totalA+=a[i];
	i++;
    }
    if(j < len_b){
      totalB+=b[j];
      j++;
    }
   }
    total = totalA + totalB;
    printf("%d", total);
    result[0] = total;

  return (int)result;
}

int main() {
  int x [] = {1,2,3,4} ;
  int y [] = {2,3,1};
  size_t len_x = sizeof(x) / sizeof(x[0]);
  size_t len_y = sizeof(y) / sizeof(y[0]);
  sumArrays(x,len_x, y, len_y);
  return 0;
}
