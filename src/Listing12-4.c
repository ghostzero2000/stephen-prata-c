/* global.c -- использование внешней переменной */ 
#include <stdio.h> 
int units = 0;                /* внешняя переменная */ 
void critic(void); 
int main(void) 
{ 
   extern int units;          /* необязательное повторное объявление */ 
   printf("Сколько фунтов весит маленький бочонок меда?\n"); 
   scanf("%d", &units); 
   while ( units != 56) 
       critic(); 
   printf("Вы должны это проверить!\n"); 
   return 0; 
} 
void critic(void) 
{ 
   /* необязательное повторное объявление опускается */ 
   printf("Вам не повезло. Попытайтесь еще раз.\n"); 
   scanf("%d", &units); 
}
