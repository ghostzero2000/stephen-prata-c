/* assert.c -- использование макроса assert() */
#include <stdio.h>
#include <math.h>
#include <assert.h>
int main()
{
  double x, y, z;
  puts("Введите пару чисел (0 0 для выхода): ");
  while (scanf("%lf%lf", &x, &y) == 2
              && (x != 0 || y != 0))
  {
    z = x * x - y * y; /* должен быть + */
    assert(z >= 0);
    printf("ответ: %f\n", sqrt(z));
    puts("Следующая пара чисел: ");
  }
  puts("Программа завершена.");
  return 0;
}
