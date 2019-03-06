/* films2.c -- использование связного списка структур */
#include <stdio.h>
#include <stdlib.h> /* содержит прототип функции malloc()   */
#include <string.h> /* содержит прототип функции strcpy()   */
#define TSIZE 45    /* размер массива для хранения названия */

struct film {
	char title[TSIZE];
	int rating;
	struct film * next; /* указывает на следующую структуру в списке */
};

int main(void)
{
	struct film * head = NULL;
	struct film * prev, * current;
	char input[TSIZE];

/* Сбор и сохранение информации */
	puts("Введите название первого фильма:");
	while (gets(input) != NULL && input[0] != '\0')
	{
		current = (struct film *) malloc(sizeof(struct film));
		if (head == NULL) /* первая структура      */
			head = current;
		else              /* последующие структуры */
			prev->next = current;
		current->next = NULL;
		strcpy(current->title, input);
		puts("Введите свое значение рейтинга <0-10>:");
		scanf("%d", &current->rating);
		while(getchar() != '\n')
			continue;
		puts("Введите название следующего фильма (или пустую строку для прекращения ввода информации):");
		prev = current;
	}
/* Отображение списка фильмов */
	if (head == NULL)
		printf("Данные не были введены. ");
	else
		printf ("Список фильмов:\n");
	current = head;
	while (current != NULL)
	{
		printf("Фильм: %s Рейтинг: %d\n",
			current->title, current->rating);
		current = current->next;
	}

/* Программа выполнена, поэтому можно освободить память */
	current = head;
	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
	printf("Программа завершена.\n");
	return 0;
}
