/* Программа floats.c -- некоторые комбинации типов с плавающей запятой
#include <stdio.h> 
int main(void) 
{ 
   const double RENT = 3852.99;              // константа в стиле const 
   printf("*%f*\n", RENT); 
   printf("*%e*\n", RENT); 
   printf("*%4.2f*\n", RENT); 
   printf("*%3.1f*\n", RENT); 
   printf("*%10.3f*\n", RENT); 
   printf("*%10.3e*\n", RENT); 
   printf("*%+4.2f*\n", RENT); 
   printf("*%010.2f*\n", RENT); 
   return 0; 
}
