/* copy3.c -- демонстрационная программа использования функции strncpy() */ 
#include <stdio.h> 
#include <string.h>                    /* объявление функции strncpy() */ 
#define SIZE 40 
#define TARGSIZE 7 
#define LIM 5 
int main(void) 
{ 
   char qwords[LIM][TARGSIZE]; 
   char temp[SIZE]; 
   int i = 0; 
   printf("Введите %d слов, начинающихся с буквы q:\n", LIM); 
   while (i < LIM && gets(temp)) 
   { 
      if (temp[0] != 'q') 
          printf("%s не начинается с буквы q!\n", temp); 
      else 
      { 
          strncpy(qwords[i], temp, TARGSIZE - 1); 
          qwords[i][TARGSIZE - 1] = '\0'; 
          i++; 
      } 
   } 
   puts("Перечень слов, удовлетворяющих заданному критерию:"); 
   for (i = 0; i < LIM; i++) 
       puts(qwords[i]); 
   return 0; 
}
