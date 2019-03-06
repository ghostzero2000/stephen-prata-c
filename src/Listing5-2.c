/* shoes2.c -- вычисляет длину стопы для нескольких размеров обуви */
#include <stdio.h> 
#define ADJUST 7.64 
#define SCALE 0.325 
int main(void) 
{ 
   double shoe, foot; 
   printf("Размер обуви (мужской)    длина ступни\n");
   shoe = 3.0;
   while (shoe < 18.5)           /* начало цикла while */ 
   {                             /* начало блока       */ 
      foot = SCALE*shoe + ADJUST; 
      printf("%10.1f %20.2f дюймов\n", shoe, foot); 
      shoe = shoe + 1.0;
   }                             /* конец блока        */ 
   printf("Если обувь подходит, носите ее.\n"); 
   return 0;
}
