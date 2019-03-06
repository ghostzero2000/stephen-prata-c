/* compback.c -- значения, возвращаемые функцией strcmp() */
#include <stdio.h>
#include <string.h>
int main(void)
{
   printf("strcmp(\"A\", \"A\") равно "); 
   printf("%d\n", strcmp("A", "A")); 
   printf("strcmp(\"A\", \"B\") равно "); 
   printf("%d\n", strcmp("A", "B")); 
   printf("strcmp(\"B\", \"A\") равно "); 
   printf("%d\n", strcmp("B", "A")); 
   printf("strcmp(\"C\", \"A\") равно "); 
   printf("%d\n", strcmp("C", "A")); 
   printf("strcmp(\"Z\", \"a\") равно "); 
   printf("%d\n", strcmp("Z", "a")); 
   printf("strcmp(\"apples\", \"apple\") равно "); 
   printf("%d\n", strcmp("apples", "apple")); 
   return 0; 
}
