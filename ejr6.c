#include <stdio.h>

void printChar(int num){
  if((num >= 0) & (num <= 255)) printf("El valor %d, representar al caracter %c\n",num, num); 
}

int main(){
 printChar(69); 
 return 0;
}
