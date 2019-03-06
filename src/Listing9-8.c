/* binary.c -- печатает целые числа в двоичной форме */ 
#include <stdio.h> 
void to_binary(unsigned long n); 
int main(void) 
{ 
   unsigned long number; 
   printf("Введите целое число (или q для завершения программы):\n"); 
   while (scanf("%ul", &number) == 1) 
   { 
      printf("Двоичный эквивалент: "); 
      to_binary(number); 
      putchar('\n'); 
      printf("Введите целое число (или q для завершения программы):\n"); 
   } 
   printf("Программа завершена.\n"); 
   return 0; 
} 
void to_binary(unsigned long n)     /* рекурсивная функция */ 
{ 
   int r; 
   r = n % 2; 
   if (n >= 2) 
      to_binary(n / 2); 
   putchar('0' + r); 
   return; 
}
