// doubincl.c -- двойное включение заголовочного файла
#include <stdio.h>
#include "names.h"
#include "names.h" // непреднамеренное повторное включение
int main()
{
  names winner = {"Иван", "Иванов"};
  printf("Победителем стал %s %s.\n", winner.first,
     winner.last);
  return 0;
}
