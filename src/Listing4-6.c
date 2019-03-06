/* printout.с -- использует спецификаторы преобразования */
#include  <stdio.h> 
#define PI 3.141593 
int main(void) 
{ 
   int number = 5; 
   float espresso = 13.5; 
   int cost = 3100; 
   printf("%d администраторов выпили %f чашек кофе эспрессо.\n", number, 
         espresso); 
   printf("Значение pi равно %f.\n", PI); 
   printf("До свидания! Ваше искусство слишком дорого мне обходится,\n"); 
   printf("%c%d\n", '$', 2 * cost); 
   return 0; 
}
