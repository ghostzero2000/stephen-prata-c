/* addemup.c -- четыре вида операторов */
#include <stdio.h> 
int main(void)              /* находит сумму первых 20 натуральных чисел */ 
{ 
   int count, sum;          /* оператор объявления                       */ 
   count = 0;               /* оператор присваивания                     */ 
   sum = 0;                 /* то же самое                               */ 
   while (count++ < 20)     /* оператор цикла while                      */ 
      sum = sum + count;    /* операторы                                 */ 
   printf("sum = %d\n", sum); /* оператор вызова функции                  */ 
   return 0; 
}
