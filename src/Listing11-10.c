/* put1.c -- печатает строку без добавления символа \n */ 
#include <stdio.h> 
void put1(const char * string)         /* строка не меняется */ 
{ 
   while (*string != '\0') 
       putchar(*string++); 
}
