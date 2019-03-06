/* Программа nono.c -- не делайте так! */ 
#include <stdio.h> 
int main(void) 
{ 
   char side_a[] = "Сторона А"; 
   char dont[] = {'В', 'А', 'У', '!' }; 
   char side_b[] = "Сторона Б"; 
   puts(dont);          /* dont не является строкой */ 
   return 0; 
}
