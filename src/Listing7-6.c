// chcount.c -- использование логического оператора AND 
#include <stdio.h> 
#define PERIOD '.' 
int main(void) 
{
   int ch; 
   int charcount = 0; 
   while ((ch = getchar()) != PERIOD) 
   { 
      if (ch != '"' && ch != '\'') 
         charcount++; 
   } 
   printf("В данном предложении содержатся %d символов, отличных от кавычек.\n", charcount);
   return 0; 
}
