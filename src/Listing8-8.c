/* menuette.c -- технология меню */ 
#include <stdio.h> 
char get_choice(void); 
char get_first(void); 
int get_int(void); 
void count(void); 
int main(void) 
{ 
   int choice; 
   void count(void); 
   while ( (choice = get_choice()) != 'в') 
   { 
      switch (choice) 
      { 
         case 'с' : printf("Покупайте дешево, продавайте дорого.\n"); 
                    break; 
         case 'з' : putchar('\a'); /* ANSI */ 
                    break; 
         case 'п' : count(); 
                    break;
         default :  printf("Программная ошибка!\n"); 
                    break; 
      } 
   } 
   printf("Всего хорошего.\n"); 
   return 0; 
}
void count(void) 
{
   int n,i; 
   printf("Считать до какого предела? Введите целое число:\n"); 
   n = get_int();
   for (i = 1; i <= n; i++)
      printf("%d\n", i); 
   while ( getchar() != '\n')
      continue;
} 
char get_choice(void) 
{ 
   int ch; 
   printf("Введите букву выбранного варианта:\n"); 
   printf("с. совет           з. звонок\n"); 
   printf("п. подсчет         в. выход\n"); 
   ch = get_first(); 
   while ( ch != 'с' && ch != 'з' && ch != 'п' && ch != 'в') 
   { 
      printf("Выберите с, з, п или в.\n"); 
      ch = get_first(); 
   } 
   return ch; 
} 
char get_first(void) 
{ 
   int ch; 
   ch = getchar(); 
   while (getchar() != '\n') 
      continue; 
   return ch; 
}
int get_int(void) 
{ 
   int input; 
   char ch; 
   while (scanf("%d", &input) != 1) 
   { 
      while ((ch = getchar()) != '\n') 
         putchar(ch);                // удалить неправильный вывод 
      printf(" не является целочисленным.\nПожалуйста, введите ");
      printf("целое число, такое как 25, -178 или 3: ");
   }
   return input;
}
