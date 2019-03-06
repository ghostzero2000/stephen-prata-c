/* count.c -- использование стандартного ввода-вывода */ 
#include <stdio.h> 
#include <stdlib.h>      // прототип ANSI C функции exit() 
int main(int argc, char *argv[]) 
{ 
    int ch;              // место, куда помещается каждый символ в том виде,
                         // в каком он был прочитан 
    FILE *fp;            // "указатель на файл" 
    long count = 0; 
    if (argc != 2) 
    { 
        printf("Использование: %s filename\n", argv[0]); 
        exit(1); 
    } 
    if ((fp = fopen(argv[1], "r")) == NULL) 
    { 
        printf("Не удается открыть %s\n", argv[1]); 
        exit(1); 
    } 
   while ((ch = getc(fp)) != EOF) 
    { 
        putc(ch,stdout);     // то же, что и putchar(ch); 
        count++; 
    } 
    fclose(fp); 
    printf("Файл %s содержит %ld символов\n", argv[1], count); 
    return 0; 
}
