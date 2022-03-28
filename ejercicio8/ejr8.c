#include "ejr8.h"

int getSum(int n){
  int total = 0;
  int num_actual = 1;
  int counter = 0;
  while(counter != n){
     if(num_actual % 2 == 0) {
         total+= num_actual;
	 counter++;
     }  
     num_actual++;
  }

  return total;
}
