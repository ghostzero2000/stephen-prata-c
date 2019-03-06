/* manydice.c -- многократное бросание костей */ 
/* компилируется с файлом diceroll.c */ 
#include <stdio.h> 
#include <stdlib.h>              /* для библиотечной функции srand() */ 
#include <time.h>                /* для функции time()               */ 
#include "diceroll.h"            /* для функции roll_n_dice()        */ 
                                 /* и для переменной roll_count      */ 
int main(void) 
{ 
   int dice,roll; 
   int sides; 
   srand((unsigned int) time(0));   /* рандомизация начального числа */ 
   printf("Введите количество граней кости или 0 для завершения программы.\n"); 
   while (scanf("%d", &sides) == 1 && sides > 0) 
   { 
      printf("Сколько нужно костей?\n"); 
      scanf("%d", &dice); 
      roll = roll_n_dice(dice, sides); 
      printf("Вы бросали %d раз, используя %d %d-гранные кости.\n", 
              roll, dice, sides); 
      printf("Сколько должно быть граней? Введите 0 для завершения программы.\n"); 
   }
   printf("Функция rollem() была вызвана %d раз.\n", 
           roll_count);              /* используется внешняя переменная */ 
   printf("Удачи!\n"); 
   return 0; 
}
