// cypher2.c -- меняет символы входных данных, оставляя неизменными символы,
// не являющиеся буквами 
#include <stdio.h> 
#include <ctype.h>          // для функции isalpha() 
int main(void) 
{ 
   char ch; 
   while ((ch = getchar()) != '\n') 
   { 
      if (isalpha(ch))      // если это буква, 
         putchar(ch + 1);   // изменить ее  
      else                  // в противном случае 
         putchar(ch);       // вывести символ таким, каким он есть 
   }
   putchar(ch);             // печатать символ новой строки 
   return 0; 
}
