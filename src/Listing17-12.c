/* petclub.c -- использование дерева бинарного поиска */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tree.h"

char menu(void);
void addpet(Tree * pt);
void droppet(Tree * pt);
void showpets(const Tree * pt);
void findpet(const Tree * pt);
void printitem(Item item);
void uppercase(char * str);

int main(void)
{
	Tree pets;
	char choice;

	InitializeTree(&pets);
	while ((choice = menu()) != 'q')
	{
		switch (choice)
		{
			case 'a' : addpet(&pets);
				break;
			case 'l' : showpets(&pets);
				break;
			case 'f' : findpet(&pets);
				break;
			case 'n' : printf("%d животные в клубе\n",
					TreeItemCount(&pets));
				break;
			case 'd' : droppet(&pets);
				break;
			default : puts("Ошибка переключения");
		}
	}
	DeleteAll(&pets);
	puts("Программа завершена.");

	return 0;
}

char menu(void)
{
	int ch;

	puts("Программа членства в клубе Nerfville Pet Club ");
	puts("Введите букву, соответствующую вашему выбору:");
	puts("a) добавление животного   l) вывод списка животных");
	puts("n) количество животных    f) поиск животных");
	puts("d) удаление животного     q) выход");
	while ((ch = getchar()) != EOF)
	{
		while (getchar() != '\n') /* отбрасывание остальной части строки */
			continue;
		ch = tolower(ch);
		if (strchr("alrfndq",ch) == NULL)
			puts("Пожалуйста, введите букву a, l, f, n, d или q:");
		else
			break;
	}
	if (ch == EOF) /* ввод символа EOF приводит к выходу из программы */
		ch = 'q';

	return ch;
}

void addpet(Tree * pt)
{
	Item temp;

	if (TreeIsFull(pt))
		puts("Вакансии в клубе отсутствуют!");
	else
	{
		puts("Пожалуйста, введите кличку животного:");
		gets(temp.petname);
		puts("Теперь введите вид животного:");
		gets(temp.petkind);
		uppercase(temp.petname);
		uppercase(temp.petkind);
		AddItem(&temp, pt);
	}
}

void showpets(const Tree * pt)
{
	if (TreeIsEmpty(pt))
		puts("Записи отсутствуют!");
	else
		Traverse(pt, printitem);
}

void printitem(Item item)
{
	printf("Животное: %-19s Вид: %-19s\n", item.petname,
		item.petkind);
}

void findpet(const Tree * pt)
{
	Item temp;
	if (TreeIsEmpty(pt))
	{
		puts("Записи отсутствуют!");
		return; /* если дерево пусто, выход из функции */
	}

	puts("Пожалуйста, введите кличку животного, которое хотите найти:");
	gets(temp.petname);
	puts("Теперь введите вид животного:");
	gets(temp.petkind);
	uppercase(temp.petname);
	uppercase(temp.petkind);
	printf("%s животное %s ", temp.petname, temp.petkind);
	if (InTree(&temp, pt))
		printf("является элементом клуба.\n");
	else
		printf("не является элементом клуба.\n");
}

void droppet(Tree * pt)
{
	Item temp;

	if (TreeIsEmpty(pt))
	{
		puts("Записи отсутствуют!");
		return; /* если дерево пусто, выход из функции */
	}

	puts("Пожалуйста, введите кличку животного, которое нужно исключить из клуба:");
	gets(temp.petname);
	puts("Теперь введите вид животного:");
	gets(temp.petkind);
	uppercase(temp.petname);
	uppercase(temp.petkind);
	printf("%s животное %s ", temp.petname, temp.petkind);
	if (DeleteItem(&temp, pt))
		printf("исключено из клуба.\n");
	else
		printf("не является членом клуба.\n");
}

void uppercase(char * str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}
