/* r_drive1.c -- тестирование функций rand1() и srand1() */ 
/* компилируется с файлом s_and_r.c */ 
#include <stdio.h> 
extern void srand1(unsigned int x); 
extern int rand1(void); 
int main(void) 
{ 
   int count; 
   unsigned seed; 
   printf("Введите начальное число.\n"); 
   while (scanf("%u", &seed) == 1) 
   { 
       srand1(seed);                  /* переустановить начальное число */ 
       for (count = 0; count < 5; count++) 
          printf("%hd\n", rand1()); 
       printf("Введите следующее начальное число (или q для завершения):\n"); 
   } 
   printf("Программа завершена.\n"); 
   return 0; 
}
