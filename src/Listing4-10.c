/* strings.c -- форматирование строки */ 
#include <stdio. h> 
#define BLURB "Authentic imitation!" 
int main(void) 
{ 
   printf{"/%2s/\n", BLURB); 
   printf("/%24s/\n", BLURB); 
   printft"/%24.5s/\n", BLURB); 
   printf ("/%-24.5s/\n", BLURB); 
   return 0; 
}
