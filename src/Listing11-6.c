/* name3.c -- программа считывает имена, пользуясь функцией fgets() */ 
#include <stdio.h> 
#define MAX 81 
int main(void) 
{ 
   char name[MAX]; 
   char * ptr; 
   printf("Как вас зовут?\n"); 
   ptr = fgets(name, MAX, stdin); 
   printf("%s? А! %s!\n", name, ptr); 
   return 0; 
}
