#include<stdio.h>

int main(){
  int c;
  while((c = getchar()) != EOF){
    switch(c){
      case '\':
	putchar('\\');
	break;
      case '\t':
	putchar('\t');
	break;
      case '\n':
	putchar('\n');
	break;
      default:
	putchar(c);
    }
  }
  return 0;
}
