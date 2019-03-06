/* book.c -- каталог для одной книги */ 
#include <stdio.h> 
#define MAXTITL 41         /* максимальная длина названия + 1 */ 
#define MAXAUTL 31         /* максимальная длина имени автора + 1 */ 
struct book {              /* шаблон структуры: дескриптором является book */ 
    char title[MAXTITL]; 
    char author[MAXAUTL]; 
    float value; 
};                         /* конец шаблона структуры */ 
int main(void)
{
    struct book library;   /* объявить библиотеку как переменную типа book */ 
    printf("Введите название книги.\n"); 
    gets(library.title);   /* доступ к разделу названия книги */ 
    printf("Теперь введите ФИО автора.\n"); 
    gets(library.author); 
    printf("Теперь введите цену.\n"); 
    scanf("%f", &library.value); 
    printf("%s от %s: $%.2f\n",library.title, 
         library.author, library.value); 
    printf("%s: \"%s\" ($%.2f)\n", library.author, 
         library.title, library.value); 
    printf("Готово.\n");
    return 0;
}
