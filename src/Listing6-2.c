// when.c -- когда цикл завершается? 
#include <stdio.h> 
int main(void) 
{ 
   int n = 5; 
   while (n < 7)                      // строка 7 
   { 
      printf("n = %d\n", n);
      n++;                            // строка 10 
      printf("Теперь n = %d\n", n);   // строка 11 
   } 
   printf("Цикл завершен.\n"); 
   return 0; 
}
