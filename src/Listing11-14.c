/* str_cat.c -- объединяет две строки */ 
#include <stdio.h> 
#include <string.h>               /* объявление функции strcat()*/ 
#define SIZE 80 
int main(void) 
{ 
   char flower[SIZE]; 
   char addon[] = " пахнет как старые валенки."; 
   puts("Какой ваш любимый цветок?"); 
   gets(flower); 
   strcat(flower, addon); 
   puts(flower); 
   puts(addon); 
   return 0; 
}
