// scores_in.c -- использование циклов для обработки массивов
#include <stdio.h> 
#define SIZE 10 
#define PAR 72 
int main(void) 
{ 
   int index, score[SIZE]; 
   int sum = 0; 
   float average; 
   printf("Введите %d результатов игры в гольф:\n", SIZE); 
   for (index = 0; index < SIZE; index++) 
      scanf("%d", &score[index]);  // прочитать 10 результатов игры в гольф 
   printf("Введены следующие результаты:\n"); 
   for (index = 0; index < SIZE; index++) 
      printf("%5d", score[index]); // проверить введенную информацию 
   printf("\n"); 
   for (index = 0; index < SIZE; index++) 
      sum += score[index];         // сложить результаты 
   average = (float) sum / SIZE;   // распределение во времени
   printf("Окончательная сумма очков = %d, среднее значение = %.2f\n", 
          sum, average); 
   printf("Полученный гандикап равен %.0f.\n", average - PAR); 
   return 0; 
}
