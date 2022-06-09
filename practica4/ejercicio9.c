#define T_INT 1
#define T_FLOAT 2
#define T_STR 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union t_union{
  int ival;
  float fval;
  char *sval;
};

int main(void){
  union t_union u;
  int x;
  scanf("%d",&x);
  if( x == T_INT ) {
     scanf("%d", &u.ival);
     printf("EL valor leido de ival es = %d\n",u.ival);
  }else if( x == T_FLOAT ){
    scanf("%f", &u.fval);
    printf("El valor leido de fval es = %0.2f\n", u.fval);
  }else if(x == T_STR){
      int index = 0;
      u.sval = malloc(sizeof(char)*4);
      while((index++ < 4) & ((x = getchar()) != EOF)){
	 *u.sval = x;
	  u.sval++;
      };
      *u.sval = '\0'; 
      /* strcpy(u.sval, "Hola"); */
      printf("EL valor leido de sval fue = %s\n", u.sval);
      /* free(u.sval); */
      /* while((x = getchar()) != EOF) getchar(); */
  }else {
    fprintf(stderr, "Invalid value\n");
    return 1;
  }
  return 0;
}
