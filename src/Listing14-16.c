// func_ptr.c -- использование указателей на функции 
#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
char showmenu(void); 
void eatline(void);             // читать до конца строки 
void show(void (* fp)(char *), char * str); 
void ToUpper(char *);          // преобразовать строку к верхнему регистру 
void ToLower(char *);          // преобразовать строку к нижнему регистру
void Transpose(char *);        // перестановка регистров 
void Dummy(char *);            // строка остается неизменной 
int main(void) 
{ 
    char line[81]; 
    char copy[81]; 
    char choice; 
    void (*pfun)(char *);      // указывает на функцию, которая использует 
                               // значение типа char * в качестве аргумента 
                               // и не имеет возвращаемого значения 
    puts("Введите строку (пустая строка - выход из программы):"); 
    while (gets(line) != NULL && line[0] != '\0') 
    { 
        while ((choice = showmenu()) != 'n') 
        { 
            switch (choice )       // установка указателя 
            { 
                case 'u' : pfun = ToUpper; break; 
                case 'l' : pfun = ToLower; break; 
                case 't' : pfun = Transpose; break; 
                case 'o' : pfun = Dummy; break; 
            } 
            strcpy(copy, line);    // копия для функции show() 
            show(pfun, copy);      // используется избранная функция 
        } 
        puts("Введите строку (пустая строка - выход из программы):"); 
    } 
    puts("Всего доброго!");
    return 0;
}
char showmenu(void)
{
    char ans;
    puts("Введите номер выбранного элемента меню:");
    puts("u) нижний регистр         l) верхний регистр");
    puts("t) перестановка регистров o) исходный регистр");
    puts("n) следующая строка");
    ans = getchar();               // ввод ответа
    ans = tolower(ans);            // перевод в нижний регистр 
    eatline();                     // удаление оставшейся части строки 
    while (strchr("ulton", ans) == NULL) 
    { 
        puts("Пожалуйста, введите a u, l, t, o или n:"); 
        ans = tolower(getchar()); 
        eatline(); 
    } 
    return ans; 
} 
void eatline(void) 
{ 
    while (getchar() != '\n') 
        continue; 
} 
void ToUpper(char * str) 
{ 
    while (*str) 
    { 
        *str = toupper(*str); 
        str++; 
    } 
} 
void ToLower(char * str) 
{ 
    while (*str) 
    { 
        *str = tolower(*str); 
        str++; 
    } 
} 
void Transpose(char * str) 
{ 
    while (*str) 
    { 
        if (islower(*str)) 
            *str = toupper(*str); 
        else if (isupper(*str)) 
             *str = tolower(*str); 
        str++; 
    } 
} 
void Dummy(char * str) 
{
                               // оставляет строку неизменной 
}
void show(void (* fp)(char *), char * str)
{
    (*fp)(str);                // применяет избранные функции к строке str 
    puts(str);                 // отображает результат 
}
