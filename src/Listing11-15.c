/* join_chk.c -- объединяет две строки, сначала проверяя размер */ 
#include <stdio.h> 
#include <string.h> 
#define SIZE 30 
#define BUGSIZE 11 
int main(void)
{ 
   char flower[SIZE];
   char addon[] = " пахнет как старые валенки. "; 
   char bug[BUGSIZE]; 
   int available; 
   puts("Какой ваш любимый цветок?"); 
   gets(flower); 
   if ((strlen(addon) + strlen(flower) + 1) <= SIZE) 
       strcat(flower, addon); 
   puts(flower); 
   puts("Какое ваше любимое насекомое?"); 
   gets(bug); 
   available = BUGSIZE - strlen(bug) - 1; 
   strncat(bug, addon, available); 
   puts(bug); 
   return 0; 
}
