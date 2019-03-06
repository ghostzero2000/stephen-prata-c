/* misuse.c -- неправильное использование функции */ 
#include <stdio.h> 
int imax();               /* объявление в старом стиле */ 
int main(void) 
{ 
   printf("Наибольшим значением из %d и %d является %d.\n", 
          3, 5, imax(3)); 
   printf("Наибольшим значением из %d и %d является %d.\n", 
          3, 5, imax(3.0, 5.0)); 
   return 0; 
} 
int imax(n, m) 
int n, m; 
{ 
   int max; 
   if (n > m) 
      max = n; 
   else 
      max = m; 
   return max; 
}
