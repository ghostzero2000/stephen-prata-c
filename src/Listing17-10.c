/* tree.h -- дерево бинарного поиска */
/* в этом дереве никакие дублированные элементы не допускаются */
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

/* переопределение типа Item */
typedef struct item
{
	char petname[20];
	char petkind[20];
} Item;

#define MAXITEMS 10

typedef struct node
{
	Item item;
	struct node * left;  /* указатель на левую ветвь  */
	struct node * right; /* указатель на правую ветвь */
} Node;

typedef struct tree
{
	Node * root; /* указатель на корень дерева    */
	int size;    /* количество элементов в дереве */
} Tree;

/* прототипы функций */

/* операция:          инициализация дерева пустым значением        */
/* начальные условия: ptree указывает на дерево                    */
/* конечные условия:  дерево инициализировано пустым значением     */
void InitializeTree(Tree * ptree);

/* операция:          определение того, является ли дерево пустым  */
/* начальные условия: ptree указывает на дерево                    */
/* конечные условия:  функция возвращает значение true, если дерево*/
/*                    пусто, и false - в противном случае          */
bool TreeIsEmpty(const Tree * ptree);

/* операция:          определение того, является ли дерево полным  */
/* начальные условия: ptree указывает на дерево                    */
/* конечные условия:  функция возвращает значение true, если дерево*/
/*                    полно, и false - в противном случае          */
bool TreeIsFull(const Tree * ptree);

/* операция:          определение количества элементов в дереве    */
/* начальные условия: ptree указывает на дерево                    */
/* конечные условия:  функция возвращает число элементов в дереве  */
int TreeItemCount(const Tree * ptree);

/* операция:          добавление элемента в дерево                 */
/* начальные условия: pi - адрес добавляемого элемента             */
/*                    ptree указывает на инициализированное дерево */
/* конечные условия:  если возможно, функция добавляет элемент в   */
/*                    дерево и возвращает значение true;           */
/*                    в противном случае она возвращает значение   */
/*                    false                                        */
bool AddItem(const Item * pi, Tree * ptree);

/* операция:          поиск элемента в дереве                      */
/* начальные условия: pi указывает на элемент                      */
/*                    ptree указывает на инициализированное дерево */
/* конечные условия:  функция возвращает значение true, если       */
/*                    элемент присутствует в дереве, и значение    */
/*                    false - в противном случае                   */
bool InTree(const Item * pi, const Tree * ptree);

/* операция:          удаление элемента из дерева                  */
/* начальные условия: pi - адрес удаляемого элемента               */
/*                    ptree указывает на инициализированное дерево */
/* конечные условия:  если возможно, функция удаляет элемент       */
/*                    из дерева и возвращает значение true;        */
/*                    в противном случае функция возвращает        */
/*                    значение false                               */
bool DeleteItem(const Item * pi, Tree * ptree);

/* операция:          применение функции к каждому элементу в дереве*/
/* начальные условия: ptree указывает на дерево                     */
/*                    pfun указывает на функцию, которая принимает */
/*                    аргумент Item и не имеет возвращаемого       */
/*                    значения                                     */
/* конечные условия:  функция, указанная pfun, выполняется один раз*/
/*                    для каждого элемента в дереве                */
void Traverse (const Tree * ptree, void (* pfun)(Item item));

/* операция:          удаление всех элементов из дерева            */
/* начальные условия: ptree указывает на инициализированное дерево */
/* конечные условия:  дерево пусто                                 */
void DeleteAll(Tree * ptree);

#endif

