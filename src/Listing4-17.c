/* skip2.c -- игнорирует первые два целых числа из потока ввода */ 
#include <stdio.h>
int main(void) 
{ 
   int n; 
   printf("Введите три целых числа:\n"); 
   scanf("%*d %*d %d",fin); 
   printf("Последним целым числом было %d\n", n); 
   return 0; 
}
