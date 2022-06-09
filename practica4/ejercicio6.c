#include <stdio.h>


typedef struct {
  int year;
  int month;
  int day;
} t_date;

void initialDate(t_date *d){
  d->year = 2001;
  d->day = 21;
  d->month = 7;
}



int main(void){
  t_date date;
  initialDate(&date);
  printf("La fecha dada es %d/%d/%d\n",date.day,date.month,date.year);
  return 0;
}
