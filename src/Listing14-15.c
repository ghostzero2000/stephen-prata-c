/* enum.c -- использование перечислимых значений */ 
#include <stdio.h> 
#include <string.h>                    // для функции strcmp() 
#include <stdbool.h>                   // требование стандарта C99 
enum spectrum {red, orange, yellow, green, blue, violet}; 
const char * colors[] = {"красный", "оранжевый", "желтый", 
                         "зеленый", "голубой", "фиолетовый"}; 
#define LEN 30 
int main(void) 
{ 
   char choice[LEN]; 
   enum spectrum color; 
   bool color_is_found = false; 
   puts("Введите цвет (или пустую строку для выхода из программы):"); 
   while (gets(choice) != NULL && choice[0] != '\0') 
   { 
       for (color = red; color <= violet; color++) 
       { 
           if (strcmp(choice, colors[color]) == 0) 
           { 
               color_is_found = true; 
               break; 
           } 
       } 
       if (color_is_found) 
          switch(color) 
          { 
                 case red : puts("Розы красные."); 
                            break; 
                 case orange : puts("Маки оранжевые."); 
                            break; 
                 case yellow : puts("Подсолнухи желтые."); 
                            break; 
                 case green : puts("Трава зеленая."); 
                            break; 
                 case blue : puts("Колокольчики голубые."); 
                            break; 
                 case violet : puts("Фиалки фиолетовые."); 
                            break; 
          } 
       else 
          printf("Мне не известен %s цвет.\n", choice); 
       color_is_found = false; 
       puts("Введите следующий цвет (или пустую строку для выхода из программы):"); 
   } 
   puts("Всего доброго!"); 
   return 0; 
}
