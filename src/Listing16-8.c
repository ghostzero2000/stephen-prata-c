// useheader.c -- использование структуры names_st
#include <stdio.h>
#include "names_st.h"
// компилировать вместе с файлом names_st.c
int main(void)
{
  names candidate;
  get_names(&candidate);
  printf("Добро пожаловать в программу, ");
  show_names(&candidate);
  printf(" !\n");
  return 0;
}
