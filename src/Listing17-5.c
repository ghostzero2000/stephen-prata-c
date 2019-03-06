/* list.c -- функции, поддерживающие операции со списком */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* прототип локальной функции */
static void CopyToNode(Item item, Node * pnode);

/* функции интерфейса */
/* устанавливает список в пустое состояние */
void InitializeList(List * plist)
{
	* plist = NULL;
}

/* возвращает значение true, если список пуст */
bool ListIsEmpty(const List * plist)
{
	if (*plist == NULL)
		return true;
	else
		return false;
}

/* возвращает значение true, если список полон */
bool ListIsFull(const List * plist)
{
	Node * pt;
	bool full;

	pt = (Node *) malloc(sizeof(Node));
	if (pt == NULL)
		full = true;
	else
		full = false;
	free(pt);

	return full;
}

/* возвращает количество узлов */
unsigned int ListItemCount(const List * plist)
{
	unsigned int count = 0;
	Node * pnode = *plist; /* установка на начало списка */

	while (pnode != NULL)
	{
		++count;
		pnode = pnode->next; /* установка на следующий узел */
	}
	return count;
}


/* создает узел для хранения элемента и добавляет его в конец */
/* списка, указанного переменной plist (медленная реализация) */
bool AddItem(Item item, List * plist)
{
	Node * pnew;
	Node * scan = *plist;

	pnew = (Node *) malloc(sizeof(Node));
	if (pnew == NULL)
	return false; /* выход из функции в случае ошибки */

	CopyToNode(item, pnew);
	pnew->next = NULL;
	if (scan == NULL) /* список пуст, поэтому помещает */
		*plist = pnew; /* pnew в начало списка */
	else
	{
		while (scan->next != NULL)
			scan = scan->next; /* ищет конец списка */
		scan->next = pnew; /* добавляет pnew в конец */
	}

	return true;
}

/* посещает каждый узел и выполняет функцию, указанную pfun */
void Traverse (const List * plist, void (* pfun)(Item item) )
{
	Node * pnode = *plist; /* устанавливает указатель на начало списка */

	while (pnode != NULL)
	{
		(*pfun)(pnode->item); /* применяет функцию к элементу */
		pnode = pnode->next; /* переход к следующему элементу */
	}
}

/* освобождает память, зарезервированную функцией malloc() */
/* устанавливает указатель списка в значение NULL */
void EmptyTheList(List * plist)
{
	Node * psave;

	while (*plist != NULL)
	{
		psave = (*plist)->next; /* сохранение адреса следующего узла */
		free(*plist);           /* освобождение текущего узла        */
		*plist = psave;         /* переход к следующему узлу         */
	}
}

/* определение локальной функции */
/* копирует элемент в узел */
static void CopyToNode(Item item, Node * pnode)
{
	pnode->item = item; /* копирование структуры */
}
