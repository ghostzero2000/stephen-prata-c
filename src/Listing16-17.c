// mems.c -- использование функций memcpy() и memmove()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10
void show_array(const int ar[], int n);
int main()
{
  int values[SIZE] = {1,2,3,4,5,6,7,8,9,10};
  int target[SIZE];
  double curious[SIZE / 2] = {1.0, 2.0, 3.0, 4.0, 5.0};
  puts("Использование функции memcpy():");
  puts("значения (исходные данные): ");
  show_array(values, SIZE);
  memcpy(target, values, SIZE * sizeof(int));
  puts("целевой массив (копия значений):");
  show_array(target, SIZE);
  puts("\nИспользование memmove() для перекрывающихся областей:");
  memmove(values + 2, values, 5 * sizeof(int));
  puts("значения элементов 0-5, скопированных в 2-7:");
  show_array(values, SIZE);
  puts("\nИспользование memcpy() для копирования double в int:");
  memcpy(target, curious, (SIZE / 2) * sizeof(double));
  puts("целевой массив -- 5 значений double в 10 позиций int:");
  show_array(target, SIZE);
  return 0;
}
void show_array(const int ar[], int n)
{
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", ar[i]);
  putchar('\n');
}
