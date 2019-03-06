/* compare.c -- эта программа будет работать */ 
#include <stdio.h> 
#include <string.h> /* объявляет функцию strcmp() */ 
#define ANSWER "Грант" 
#define MAX 40 
int main(void) 
{
   char try[MAX];
   puts("Кто похоронен в могиле Гранта?"); 
   gets(try); 
   while (strcmp(try,ANSWER) != 0) 
   {
      puts("Нет, неправильно. Попытайтесь еще раз."); 
      gets(try); 
   } 
   puts("Теперь правильно!"); 
   return 0; 
}
