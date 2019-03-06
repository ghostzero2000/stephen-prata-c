// power.c -- возведение чисел в целую степень 
#include <stdio.h>
double power(double n, int p);   // прототип ANSI 
int main(void) 
{ 
   double x, xpow; 
   int exp; 
   printf("Введите число и положительную целую степень,"); 
   printf(" в которую\nчисло будет возведено. Для завершения программы"); 
   printf(" введите q.\n"); 
   while (scanf("%lf%d", &x, &exp) == 2) 
   {
      xpow = power(x,exp);      // вызов функции 
      printf("%.3g в степени %d равно %.5g\n", x, exp, xpow); 
      printf("Введите следующую пару чисел или q для завершения.\n"); 
   } 
   printf("Надеемся, вас удовлетворило качество программы - до свидания!\n"); 
   return 0; 
} 
double power(double n, int p)    // определение функции 
{ 
   double pow = 1; 
   int i; 
   for (i = 1; i <= p; i++) 
      pow *= n; 
   return pow;                   // возврат значения переменной pow
}
