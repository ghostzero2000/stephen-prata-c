//put_put.c -- функции обработки ввода, объявленные пользователем 
#include <stdio.h> 
void put1(const char *); 
int put2(const char *); 
int main(void) 
{ 
   put1("Если бы у меня было столько денег,"); 
   put1(" сколько можно было бы потратить,\n"); 
   printf("Получилось %d символов.\n", 
          put2("я никогда не чинила бы старые вещи.")); 
   return 0; 
} 
void put1(const char * string) 
{ 
   while (*string)              /* то же что и *string != '\0' */ 
       putchar(*string++); 
} 


int put2(const char * string) 
{ 
   int count = 0; 
   while (*string) 
   {
      putchar(*string++); 
      count++; 
   }
   putchar('\n'); 
   return(count); 
}
