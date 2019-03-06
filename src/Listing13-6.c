/* append.c -- добавление содержимого файлов в конец другого файла */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 1024
#define SLEN 81
void append(FILE *source, FILE *dest);
int main(void)
{
   FILE *fa, *fs;         // fa для файла назначения, fs для исходного файла 
   int files = 0;         // количество добавляемых файлов 
   char file_app[SLEN];   // имя файла назначения 
   char file_src[SLEN];   // имя исходного файла 
   puts("Введите имя файла назначения:"); 
   gets(file_app); 
   if ((fa = fopen(file_app, "a")) == NULL) 
   { 
       fprintf(stderr, "Не удается открыть файл %s\n", file_app); 
       exit(2); 
   } 
   if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0) 
   { 
       fputs("Не удается создать буфер вывода\n", stderr); 
       exit(3); 
   } 
   puts("Введите имя первого исходного файла (или пустую строку для завершения):"); 
   while (gets(file_src) && file_src[0] != '\0') 
   { 
       if (strcmp(file_src, file_app) == 0) 
           fputs("Нельзя добавлять файл в конец самого себя\n",stderr); 
       else if ((fs = fopen(file_src, "r")) == NULL) 
           fprintf(stderr, "Не удается открыть файл %s\n", file_src); 
       else 
       { 
           if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0) 
           { 
               fputs("Не удается создать буфер ввода\n",stderr); 
               continue; 
           } 
           append(fs, fa); 
           if (ferror(fs) != 0) 
               fprintf(stderr,"Ошибка во время чтения файла %s.\n", 
                       file_src); 
           if (ferror(fa) != 0) 
               fprintf(stderr,"Ошибка во время записи в файл %s.\n", 
                       file_app); 
           fclose(fs); 
           files++; 
           printf("Файл %s добавлен.\n", file_src); 
           puts("Введите имя следующего файла (или пустую строку для завершения):"); 
       } 
   } 
   printf("Готово. Добавлено %d файлов.\n", files); 
   fclose(fa); 
   return 0; 
} 
void append(FILE *source, FILE *dest) 
{ 
   size_t bytes; 
   static char temp[BUFSIZE];           // распределить один раз 
   while ((bytes = fread(temp,sizeof(char),BUFSIZE,source)) > 0) 
       fwrite(temp, sizeof (char), bytes, dest); 
}
