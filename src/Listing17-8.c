/* use_q.c -- тестирование интерфейса Queue с помощью драйвера */
/* компилируется вместе с queue.c */
#include <stdio.h>
#include "queue.h" /* определяет типы Queue, Item */

int main(void)
{
	Queue line;
	Item temp;
	char ch;

	InitializeQueue(&line);
	puts("Тестирование интерфейса Queue. Введите a, чтобы добавить значение,");
	puts("введите d, чтобы удалить значение, и введите q для выхода из программы.");
	while ((ch = getchar()) != 'q')
	{
		if (ch != 'a' && ch != 'd') /* игнорирование остального ввода */
			continue;
		if ( ch == 'a')
		{
			printf("Вводимое целое значение: ");
			scanf("%d", &temp);
			if (!QueueIsFull(&line))
			{
				printf("Помещение %d в очередь\n", temp);
				EnQueue(temp,&line);
			}
			else
				puts("Очередь полна!");
		}
		else
		{
			if (QueueIsEmpty(&line))
				puts("Значения для удаления отсутствуют!");
			else
			{
				DeQueue(&temp,&line);
				printf("Удаление %d из очереди\n", temp);
			}
		}
		printf("%d элементов в очереди\n", QueueItemCount(&line));
		puts("Введите a, чтобы добавить значение, d, чтобы удалить, q для выхода из программы:");
	}
	EmptyTheQueue(&line);
	puts("Программа завершена.");

	return 0;
}
