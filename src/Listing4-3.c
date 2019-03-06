/* praise2.c */ 
#include <stdio.h> 
#include <string.h>           /* предоставляет прототип strlenf() */ 
#define PRAISE "Какое прекрасное имя!" 
int main(void) 
{ 
   char name[40]; 
   printf("Kaк вас зовут?\n"); 
   scanf("%s", name); 
   printf("Здравствуйте, %s. %s\n", name, PRAISE); 
   printf("Ваше имя состоит из %d символов и занимает %d ячеек памяти.\n", 
        strlen(name), sizeof name); 
   printf("Хвалебная фраза содержит %d символов", 
        strlen(PRAISE)); 
   printf("и занимает %d ячеек памяти.\n",sizeof PRAISE); 
   return 0; 
}
