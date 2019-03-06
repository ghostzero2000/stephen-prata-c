/* loccheck.c -- проверка с целью выяснения, где хранятся переменные */ 
#include <stdio.h> 
void mikado(int);           /* объявление функции */ 
int main(void) 
{ 
   int pooh = 2, bah = 5;   /* переменные, локальные в функции main() */ 
   printf("В функции main() pooh = %d и &pooh = %p\n", 
           pooh, &pooh); 
   printf("В функции main() bah = %d и &bah = %p\n", 
           bah, &bah); 
   mikado(pooh); 
   return 0; 
} 
void mikado(int bah)       /* объявление функции */ 
{
   int pooh = 10;          /* переменные, локальные в функции mikado() */ 
   printf("В функции mikado() pooh = %d и &pooh = %p\n", pooh, &pooh); 
   printf("В функции mikado() bah = %d и &bah = %p\n", bah, &bah); 
}
