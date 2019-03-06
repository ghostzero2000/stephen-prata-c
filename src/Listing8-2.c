/* echo_eof.c -- повторяет ввод до момента достижения конца файла */ 
#include <stdio.h> 
int main(void) 
{ 
   int ch; 
   while ((ch = getchar()) != EOF) 
      putchar(ch); 
   return 0; 
}
