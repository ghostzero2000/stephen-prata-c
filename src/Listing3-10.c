/* escape.c - использование символов управляющих последовательностей */ 
#include <stdio.h> 
int main(void) 
{ 
   float salary; 
   printf("\aВведите предпочитаемую вами сумму месячного жалования:");/* 1 */ 
   printf(" $_______\b\b\b\b\b\b\b"); /* 2 */ 
   scanf("%f", &salary); 
   printf("\n\t$%.2f в месяц соответствует $%.2f в год.", salary, 
      salary * 12.0); /* 3 */ 
   printf("\Ого!\n"); /* 4 */ 
   return 0; 
}
