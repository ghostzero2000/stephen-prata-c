/* badcount.c - неверное число аргументов */ 
#include <stdio.h> 
int main(void) 
{ 
   int f = 4; 
   int g = 5; 
   float h = 5.0f; 
   printf("%d\n", f, g);      /* избыточное число аргументов */ 
   printf("%d %d\n",f);       /* недостаточное число аргументов */ 
   printf("%d %f\n", h, g);   /* неправильные типы спецификаторов */ 
   return 0; 
}
