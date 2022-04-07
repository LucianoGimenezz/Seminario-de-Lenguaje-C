#include <stdio.h>
int main(){


  int res, dia, mes, anio;
  do {
      res = scanf(" %2d/ %2d/ %4d", &dia, &mes, &anio);
      if(res == 0){
	printf("ERROR");
	break;
      }
      printf("scanf retorno %d\n", res);
      if (res != EOF) {
	if (res != 3) {
 	  printf("ERROR: El formato debe ser dd/mm/yyyy\n");
	} else {
	  printf("Fecha: %d/ %d/ %d\n", dia, mes, anio);
      }
    }
  } while (res != EOF);
  return 0;
}
