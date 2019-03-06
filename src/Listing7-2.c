/* cypher1.c -- вносит изменения во входные данные, сохраняя пробелы */ 
#include <stdio.h> 
#define SPACE ' '         /* кавычка, пробел, кавычка */ 
int main(void) 
{ 
   char ch; 
   ch = getchar();        /* читать символ */ 
   while (ch != '\n')     /* если это не символ конца строки */ 
   { 
      if (ch == SPACE)    /* оставить пробел нетронутым */ 
         putchar(ch);     /* символ не меняется */ 
      else 
         putchar(ch + 1); /* изменить другие символы */ 
      ch = getchar();     /* взять следующий символ */ 
   } 
   putchar(ch);           /* печатать символ новой строки */ 
	return 0; 
}