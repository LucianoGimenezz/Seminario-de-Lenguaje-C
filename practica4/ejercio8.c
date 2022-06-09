#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
  int day;
  int month;
  int year;
} t_date;

typedef struct{
  char *name;
  char *lastName;
  t_date Date_of_Birth;
  int legajo;
  char *type_document;
  int document_number;
} t_student;

int main(void){
  t_student student;
  student.name = malloc(sizeof(char)*30);
  student.lastName = malloc(sizeof(char)*30);
  student.type_document = malloc(sizeof(char)*15);
  
  strcpy(student.name,"Juan");
  strcpy(student.lastName,"Perez");
  strcpy(student.type_document, "DNI");

  student.Date_of_Birth.day = 1;
  student.Date_of_Birth.month = 6;
  student.Date_of_Birth.year = 1999;
  student.legajo = 199234;
  student.document_number = 3455456;
  t_student student2 = student;
  
  printf("Datos del estudiante 2:\n");
  printf("Nombre y apellido: %s, %s\n", student2.name , student2.lastName);
  printf("Fecha de nacimiento %d/%d/%d\n", student2.Date_of_Birth.day, student2.Date_of_Birth.month, student2.Date_of_Birth.year);
  printf("Tipo de documento y numero : %s: %d\n" , student2.type_document, student2.document_number);
  printf("Legajo: %d\n", student2.legajo);

  printf("Datos del estudiante 1:\n");
  printf("Nombre y apellido: %s, %s\n", student.name, student.lastName);
  printf("Fecha de nacimiento %d/%d/%d\n", student.Date_of_Birth.day, student.Date_of_Birth.month, student.Date_of_Birth.year);
  printf("Tipo de documento y numero : %s: %d\n",student.type_document, student.document_number);
  printf("Legajo: %d\n", student.legajo);

  strcpy(student.name, "Lorenzo");
  
  printf("Datos del estudiante 2:\n");
  printf("Nombre y apellido: %s, %s\n", student2.name , student2.lastName);
  printf("Fecha de nacimiento %d/%d/%d\n", student2.Date_of_Birth.day, student2.Date_of_Birth.month, student2.Date_of_Birth.year);
  printf("Tipo de documento y numero : %s: %d\n" , student2.type_document, student2.document_number);
  printf("Legajo: %d\n", student2.legajo);

  printf("Datos del estudiante 1:\n");
  printf("Nombre y apellido: %s, %s\n", student.name, student.lastName);
  printf("Fecha de nacimiento %d/%d/%d\n", student.Date_of_Birth.day, student.Date_of_Birth.month, student.Date_of_Birth.year);
  printf("Tipo de documento y numero : %s: %d\n",student.type_document, student.document_number);
  printf("Legajo: %d\n", student.legajo);
  
  free(student.name);
  free(student.lastName);
  free(student.type_document);
  
  free(student2.name);
  free(student2.lastName);
  free(student2.type_document);
 
  return 0;
}
