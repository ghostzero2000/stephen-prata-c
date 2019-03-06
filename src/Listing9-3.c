/* lesser.c -- из двух зол она выбирает меньшую */ 
#include <stdio.h> 
int imin(int, int); 
int main(void) 
{ 
   int evil1, evil2; 
   printf("Введите два целых числа (или q для завершения программы):\n"); 
   while (scanf("%d %d", &evil1, &evil2) == 2) 
   { 
      printf("Меньшим из двух чисел %d и %d является %d.\n", 
         evil1, evil2, imin(evil1,evil2)); 
      printf("Введите два целых числа (или q для завершения программы):\n"); 
   } 
   printf("Программа завершена.\n"); 
   return 0; 
} 
int imin(int n,int m) 
{
   int min; 

   if (n < m) 
      min = n; 
   else 
      min = m; 
   return min; 
}
