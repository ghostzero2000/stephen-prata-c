// divisors.c -- вложенные операторы if отображают на экране делители 
// заданного числа 
#include <stdio.h> 
#include <stdbool.h> 
int main(void) 
{ 
   unsigned long num;         // анализируемое число 
   unsigned long div;         // возможные делители 
   bool isPrime;              // флаг простого числа 
   printf("Введите целое число для анализа; "); 
   printf("для завершения введите q.\n"); 
   while (scanf("%lu", &num) == 1) 
   {
      for (div = 2, isPrime= true; (div * div) <= num; div++) 
      {
         if (num % div == 0) 
         { 
            if ((div * div) != num)
            printf("%lu делится на %lu и %lu.\n", 
               num, div, num / div);
            else 
               printf("%lu делится на %lu.\n", 
                  num, div); 
            isPrime= false;   // число не является простым 
         } 
      } 
      if (isPrime)
         printf("%lu является простым числом.\n", num); 
      printf("Введите следующее число для анализа; "); 
      printf("для завершения введите q.\n"); 
   } 
   printf("Всего хорошего.\n"); 
   return 0; 
}
