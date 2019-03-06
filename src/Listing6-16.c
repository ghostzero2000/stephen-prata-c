/* entry.c -- цикл с постусловием */ 
#include <stdio.h> 
int main(void) 
{
   const int secret_code = 13; 
   int code_entered; 
   printf("Чтобы войти в клуб лечения шпиономании,\n"); 
   printf("пожалуйста, введите секретный код: "); 
   scanf("%d", &code_entered);
   while (code_entered != secret_code)
   {
      printf("Чтобы войти в клуб лечения шпиономании,\n"); 
      printf("пожалуйста, введите секретный код: "); 
      scanf("%d", &code_entered);
   }
   printf("Поздравляем! Вы уже здоровы!\n");
   return 0;
}
