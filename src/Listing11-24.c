/* format.c -- форматирование строки */ 
#include <stdio.h> 
#define MAX 20 
int main(void) 
{ 
   char first[MAX]; 
   char last[MAX]; 
   char formal[2 * MAX + 10]; 
   double prize; 
   puts("Введите свое имя:"); 
   gets(first); 
   puts("Введите свою фамилию:"); 
   gets(last); 
   puts("Введите сумму денежного приза:"); 
   scanf("%lf", &prize); 
   sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize); 
   puts(formal); 
   return 0; 
}
