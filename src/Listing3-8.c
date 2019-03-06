/* typesize.c - распечатка размеров типов */ 
#include <stdio.h> 
int main(void) 
{ 
/* Стандарт c99 предусматривает спецификатор %zd для размеров типов */ 
   printf("Тип int имеет размер %u байт(а,ов).\n", sizeof(int)); 
   printf("Тип char имеет размер %u байт(а,ов).\n", sizeof(char)); 
   printf("Тип long имеет размер %u байт(а,ов).\n", sizeof(long)); 
   printf("Тип double имеет размер %u байт(а,ов).\n", sizeof(double)); 
   return 0; 
}
