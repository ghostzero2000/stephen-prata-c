/* nogo.c -- будет ли это работать? */ 
#include <stdio.h> 
#define ANSWER "Грант" 
int main(void) 
{ 
   char try[40]; 
   puts("Кто похоронен в могиле Гранта?"); 
   gets(try); 
   while (try != ANSWER) 
   { 
      puts("Нет, неправильно. Попытайтесь еще раз."); 
      gets(try); 
   } 
   puts("Теперь правильно!"); 
   return 0; 
}
