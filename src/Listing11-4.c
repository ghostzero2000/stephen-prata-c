/* name1.c -- программа считывает имя */ 
#include <stdio.h> 
#define MAX 81 
int main(void) 
{ 
   char name[MAX];            /* выделить пространство памяти */ 
   printf("Как вас зовут?\n"); 
   gets(name);                /* поместить строку в массив name */ 
   printf("Прекрасное имя, %s.\n", name); 
   return 0; 
}
