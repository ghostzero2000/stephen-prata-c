/* sort_str.c -- считывает строки и сортирует их */ 
#include <stdio.h> 
#include <string.h> 
#define SIZE 81            /* предельная длина строки, включая \0 */ 
#define LIM 20             /* максимальное количество считываемых строк */ 
#define HALT ""            /* нулевая строка для прекращения ввода */ 
void stsrt(char *strings[], int num);      /* функция сортировки строк */ 
int main(void) 
{ 
   char input[LIM][SIZE];  /* массив, в котором сохраняются результаты ввода*/ 
   char *ptstr[LIM];       /* массив переменных типа указатель */ 
   int ct = 0;             /* счетчик ввода */ 
   int k;                  /* счетчик вывода */ 
   printf("Введите не более %d строк, и они будут отсортированы.\n",LIM); 
   printf("Чтобы остановить ввод, нажмите клавишу Enter в начале строки.\n"); 
   while (ct < LIM && gets(input[ct]) != NULL 
                   && input[ct][0] != '\0') 
   {
      ptstr[ct] = input[ct];         /* установка указателей на строки */ 
      ct++; 
   } 
   stsrt(ptstr, ct);                 /* сортировщик строк */ 
   puts("\nОтсортированный список:\n"); 
   for (k = 0; k < ct; k++) 
       puts(ptstr[k]) ;              /* отсортированные указатели */ 
   return 0; 
} 
/* функция сортировки указателей строк */ 
void stsrt(char *strings[], int num) 
{ 
   char *temp; 
   int top, seek; 

   for (top = 0; top < num-1; top++) 
       for (seek = top + 1; seek < num; seek++) 
           if (strcmp(strings[top],strings[seek]) > 0) 
           { 
              temp = strings[top]; 
              strings[top] = strings[seek]; 
              strings[seek] = temp; 
           } 
}
