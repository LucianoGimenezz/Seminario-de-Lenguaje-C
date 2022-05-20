#include<stdio.h>
#include<string.h>
#include<strings.h>

int my_strlen(char *s){
  int size = 0;
  while(*s){
    size+=1;
    s+=1;
  }
  return size;
}

int my_strcmp(char *s1, char *s2){
  int x_s1 = 0, y_s2 = 0;
  while((*s1++) | (*s2++)){
    if(*s1 != *s2){
      if((!*s1) & (*s2)){
	y_s2+=1;
      }else if((*s1) & (!*s2)){
	x_s1+=1;
      }else {
	x_s1+=1;
	y_s2+=1;
      }
    } 
  }
  if( x_s1 < y_s2 ){
    return -20;
  }else if(x_s1 > y_s2){
    return 20;
  }
  return 0;
}


int main(void){
  char c [] = "queso";
  char x [] = "mundo";
  printf("%d\n", my_strlen(c));
  printf("my_strcmp:\n");
  printf("%d\n", my_strcmp(c,x));
  printf("strcmp\n");
  printf("%d\n",strcmp(c,x));
  /* char *new_char = strcat(c,x); */
  /* for(int i=0; i < strlen(new_char); i++){ */
  /*   printf("%c", *new_char); */
  /*   new_char+=1; */
  /* } */
  char z[] = {'u'};

  printf("%p\n", c+1);
  printf("%p\n", strstr(c,z));
  return 0;
}
