/* electric.c -- подсчитывает сумму для счета за электроэнергию */ 
#include <stdio.h> 
#define RATE1 0.12589      		/* тариф за первые 360 кВт/ч */ 
#define RATE2 0.17901      		/* тариф за следующие 320 кВт/ч */ 
#define RATE3 0.20971      		/* тариф, когда расход превышает 680 кВт/ч */ 
#define BREAK1 360.0       		/* первая точка разрыва тарифов */ 
#define BREAK2 680.0       		/* вторая точка разрыва тарифов */ 
#define BASE1 (RATE1 * BREAK1)	/* стоимость 360 кВт/ч */ 
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1))) 
                           		/* стоимость 680 кВт/ч */ 
int main(void) 
{ 
   double kwh;             		/* израсходованные киловатт-часы */ 
   double bill;            		/* сумма к оплате */ 
   printf("Введите количество израсходованной электроэнергии в кВт/ч.\n"); 
   scanf("%lf", &kwh);     		/* %lf для типа double */ 
   if (kwh <= BREAK1) 
      bill = RATE1 * kwh; 
   else if (kwh <= BREAK2) /* количество кВт/ч в промежутке от 360 до 680 */ 
      bill = BASE1 + (RATE2 * (kwh - BREAK1)); 
   else                    /* количество кВт/ч превышает 680 */ 
      bill = BASE2 + (RATE3 * (kwh - BREAK2)); 
   printf("Сумма к оплате за %.1f кВт/ч составляет $%1.2f.\n", kwh, bill); 
   return 0; 
}
