#include <stdio.h> 
#define MAX 100 
int main(void) 
{ 
	int count = MAX + 1; 
   while (--count > 0) {
      printf("%d бутылок минеральной воды на полке, " 
             "%d бутылок минеральной воды!\n", count, count); 
      printf("Возьмите одну из них и пустите по кругу,\n"); 
      printf("%d бутылок минеральной воды!\n\n", count - 1); 
   } 
   return 0; 
}
