/* put2.c -- печатает строку и подсчитывает выведенные символы */ 
#include <stdio.h> 
int put2(const char * string) 
{ 
   int count = 0; 
   while (*string)              /* общая идиома */ 
   { 
      putchar(*string++); 
      count++; 
   } 
   putchar('\n');               /* символ новой строки не подсчитывается */ 
   return(count); 
}
