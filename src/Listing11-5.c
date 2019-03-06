/* name2.c -- программа считывает имя */ 
#include <stdio.h> 
#define MAX 81 
int main(void) 
{ 
   char name[MAX]; 
   char * ptr; 
   printf("Как вас зовут?\n"); 
   ptr = gets(name); 
   printf("%s? А! %s!\n", name, ptr); 
   return 0; 
}
