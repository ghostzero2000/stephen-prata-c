/* hiding.c -- переменные в блоках */ 
#include <stdio.h> 
int main() 
{
   int x = 30;           /* исходное значение x */ 
   printf("x во внешнем блоке: %d\n", x); 
   { 
      int x = 77;        /* новая переменная x, скрывает первую x */ 
      printf("x во внутреннем блоке: %d\n", x); 
   } 
   printf("x во внешнем блоке: %d\n", x); 
   while (x++ < 33)      /* исходное значение x */ 
   { 
       int x = 100;      /* новая переменная x, скрывает первую x */ 
       x++; 
       printf("x в цикле while: %d\n", x); 
   } 
   printf("x во внешнем блоке: %d\n", x); 
   return 0; 
}
