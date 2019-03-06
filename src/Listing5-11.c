/* post_pre.c -- постфиксная и префиксная формы */ 
#include <stdio.h> 
int main(void) 
{ 
   int a = 1, b = 1; 
   int aplus, plusb; 
   aplus = a++; /* постфиксная форма */ 
   plusb = ++b; /* префиксная форма */ 
   printf("a   aplus   b   plusb \n"); 
   printf("%1d %5d %5d %5d\n", a, aplus, b, plusb); 
   return 0; 
}
