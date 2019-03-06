/* praise1.c -- использует различные представления строк */ 
#include <stdio.h> 
#define PRAISE "Какое прекрасное имя!"
int main(void) 
{ 
   char name[40]; 
   printf("Kaк вас зовут?\n"); 
   scanf("%s", name); 
   printf("Здравствуйте, %s. %s\n", name, PRAISE); 
   return 0; 
}
