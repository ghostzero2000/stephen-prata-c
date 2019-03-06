/* dyn_arr.c -- динамически распределенный массив */ 
#include <stdio.h> 
#include <stdlib.h>   /* для функций malloc(), free() */ 
int main(void) 
{ 
   double * ptd; 
   int max; 
   int number; 
   int i = 0; 
   puts("Введите максимальное количество элементов типа double."); 
   scanf("%d", &max); 
   ptd = (double *) malloc(max * sizeof (double)); 
   if (ptd == NULL) 
   { 
      puts("Не удалось распределить память. Аварийное завершение."); 
      exit(EXIT_FAILURE); 
   } 
   /* ptd теперь указывает на массив элементов max */ 
   puts("Введите значения (q для выхода из программы):"); 
   while (i < max && scanf("%lf", &ptd[i]) == 1) 
       ++i; 
   printf("Введено %d элементов:\n", number = i); 
   for (i = 0; i < number; i++) 
   { 
      printf("%7.2f ", ptd[i]); 
      if (i % 7 == 6) 
         putchar('\n'); 
   } 
   if (i % 7 != 0) 
      putchar('\n'); 
   puts("Программа завершена."); 
   free(ptd); 
   return 0; 
}
