// reducto.c -- сжимает ваши файлы до одной трети первоначальных размеров! 
#include <stdio.h>
#include <stdlib.h>                // для функции exit() 
#include <string.h>                // для функций strcpy(), strcat() 
#define LEN 40 
int main(int argc, char *argv[]) 
{ 
    FILE *in, *out;                // объявление двух указателей на FILE 
    int ch; 
    char name[LEN];                // хранилище для имени выходного файла 
    int count = 0; 
// проверка аргументов командной строки 
    if (argc < 2) 
    { 
         fprintf(stderr, "Использование: %s filename\n", argv[0]); 
         exit(1); 
    }
// настройка ввода
    if ((in = fopen(argv[1], "r")) == NULL) 
    { 
        fprintf(stderr, "Не удается открыть файл \"%s\"\n", 
                argv[1]); 
        exit(2); 
    } 
// настройка вывода
    strncpy(name,argv[1], LEN - 5);        // копирование имени файла 
    name[LEN - 5] = '\0'; 
    strcat(name,".red");                   // добавить суффикса .red 
    if ((out = fopen(name, "w")) == NULL) 
    {                                      // открыть файл для записи 
        fprintf(stderr,"Не могу построить выходной файл.\n"); 
        exit(3); 
    } 
// копирование данных
    while ((ch = getc(in)) != EOF) 
        if (count++ % 3 == 0) 
            putc(ch, out);               // печатать каждый третий символ 
// очистка
   if (fclose(in) != 0 || fclose(out) != 0) 
       fprintf(stderr,"Ошибка при закрытии файла\n"); 
   return 0; 
}
