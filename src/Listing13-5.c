/* reverse.c -- отображение файла в обратном порядке */ 
#include <stdio.h> 
#include <stdlib.h> 
#define CNTL_Z '\032'       /* маркер конца файла в текстовых файлах DOS */ 
#define SLEN 50 
int main(void) 
{ 
    char file[SLEN]; 
    char ch; 
    FILE *fp; 
    long count, last; 
    puts("Введите имя файла для обработки:"); 
    gets(file); 
    if ((fp = fopen(file,"rb")) == NULL) 
    {                       /* режим только чтения и двоичный режим */ 
        printf("Программа reverse не может открыть %s\n", file); 
        exit(1); 
    } 
    fseek(fp, 0L, SEEK_END);            /* перейти в конец файла */ 
    last = ftell(fp); 
    for (count = 1L; count <= last; count++) 
    { 
        fseek(fp, -count, SEEK_END);    /* вернуться */ 
        ch = getc(fp); 
    /* для DOS, работает в Unix */ 
        if (ch != CNTL_Z && ch != '\r') 
            putchar(ch); 
    /* для Macintosh */ 
    /* if (ch == '\r') 
           putchar('\n'); 
       else 
          putchar(ch); */ 
    } 
    putchar('\n'); 
    fclose(fp); 
    return 0; 
}
