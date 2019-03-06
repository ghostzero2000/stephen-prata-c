//forc99.c -- правила нового стандарта C99, касающиеся блоков 
#include <stdio.h> 
int main() 
{ 
   int n = 10; 
   printf("Первоначально n = %d\n", n); 
   for (int n = 1; n < 3; n++) 
       printf("цикл 1: n = %d\n", n); 
   printf("По завершении цикла 1 n = %d\n", n); 
   for (int n = 1; n < 3; n++) 
   { 
      printf("индекс цикла 2 n = %d\n", n); 
      int n = 30; 
      printf("цикл 2: n = %d\n", n); 
      n++; 
   } 
   printf("По завершении цикла 2 n = %d\n", n); 
   return 0; 
}
