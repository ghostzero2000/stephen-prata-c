// wordcnt.c -- производит подсчет символов, слов, строк 
#include <stdio.h> 
#include <ctype.h>    // файл, содержащий функцию isspace() 
#include <stdbool.h>  // ключевые слова bool, true, false 
#define STOP '|' 
int main(void) 
{ 
   char c;                // считанный символ 
   char prev;             // предыдущий считанный символ 
   long n_chars = 0L;     // счетчик символов 
   int n_lines = 0;       // счетчик строк 
   int n_words = 0;       // количество слов 
   int p_lines = 0;       // количество частичных слов 
   bool inword = false;   // == true если c внутри слова 
   printf("Введите текст для анализа (| для завершения):\n"); 
   prev = '\n';           // используется для распознавания полноценных строк 
   while ((c = getchar()) != STOP) 
   { 
      n_chars++;          // подсчет символов 
      if (c == '\n') 
         n_lines++;       // подсчет строк 
      if (!isspace(c) && !inword) 
      { 
         inword = true;   // начало нового слова 
         n_words++;       // подсчет слов 
      } 
      if (isspace(c) && inword) 
         inword = false;  // достигнут конец слова 
      prev = c;           // сохраняет символьное значение 
   } 
   if (prev != '\n') 
      p_lines = 1; 
   printf("количество символов = %ld, количество слов = %d, количество строк = %d, ", 
      n_chars, n_words, n_lines); 
   printf("количество частичных строк = %d\n", p_lines); 
   return 0; 
}
