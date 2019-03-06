// sizeof.c -- использование операции sizeof
// Применение модификатора %z стандарта C99 -- попытайтесь воспользоваться
// %u или %lu, если вам не достаточно %zd
#include <stdio.h>
int main(void)
{
   int n = 0;
   size_t intsize; 
   intsize = sizeof (int);
   printf("n = %d, n состоит из %zd байтов; все значения int имеют %zd байтов.\n",
         n, sizeof n, intsize );
   return 0;
}
