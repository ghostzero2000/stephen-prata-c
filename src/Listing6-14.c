/* zeno.c -- сумма последовательности */
#include <stdio.h>
int main(void)
{
   int t_ct;           // счетчик элементов последовательности 
   double time, x;
   int limit;
   printf("Введите необходимое количество элементов последовательности: ");
   scanf("%d", &limit);
   for (time=0, x=1, t_ct=1; t_ct <= limit; t_ct++, x *= 2.0)
   {
      time += 1.0/x;
      printf("Время = %f, когда количество элементов = %d.\n", time, t_ct);
   }
   return 0;
}
