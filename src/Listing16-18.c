//varargs.c -- использование переменного количества аргументов
#include <stdio.h>
#include <stdarg.h>
double sum(int, ...);
int main(void)
{
  double s,t;
  s = sum(3, 1.1, 2.5, 13.3);
  t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
  printf("возвращаемое значение для "
       "sum(3, 1.1, 2.5, 13.3):            %g\n", s);
  printf("возвращаемое значение для "
       "sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1): %g\n", t);
  return 0;
}
double sum(int lim,...)
{
  va_list ap; // объявление объекта хранения аргументов
  double tot = 0;
  int i;
  va_start(ap, lim); // инициализация ap списком аргументов
  for (i = 0; i < lim; i++)
    tot += va_arg(ap, double); // доступ к каждому аргументу списка
  va_end(ap);  // удаление списка
  return tot;
}
