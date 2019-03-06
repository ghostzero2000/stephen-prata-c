// names3.c -- использование указателей и функции malloc() 
#include <stdio.h> 
#include <string.h>               // для функций strcpy(), strlen() 
#include <stdlib.h>               // для функций malloc(), free() 
struct namect { 
    char * fname;                 // использование указателей 
    char * lname; 
    int letters; 
}; 
void getinfo(struct namect *);    // распределение памяти 
void makeinfo(struct namect *); 
void showinfo(const struct namect *); 
void cleanup(struct namect *);    // освобождение памяти, когда она не нужна 
int main(void) 
{ 
    struct namect person; 
    getinfo(&person); 
    makeinfo(&person); 
    showinfo(&person); 
    cleanup(&person); 
    return 0; 
} 
void getinfo (struct namect * pst) 
{ 
    char temp[81]; 
    printf("Введите свое имя.\n"); 
    gets(temp); 
    // распределение памяти для хранения имени 
    pst->fname = (char *) malloc(strlen(temp) + 1); 
    // копирование имени в распределенную память 
    strcpy(pst->fname, temp); 
    printf("Введите свою фамилию.\n"); 
    gets(temp); 
    pst->lname = (char *) malloc(strlen(temp) + 1); 
    strcpy(pst->lname, temp); 
} 
void makeinfo (struct namect * pst) 
{
    pst->letters = strlen(pst->fname) + 
                   strlen(pst->lname); 
}
void showinfo (const struct namect * pst) 
{ 
    printf("%s %s, ваше имя и фамилия содержат %d букв.\n", 
    pst->fname, pst->lname, pst->letters); 
} 
void cleanup(struct namect * pst) 
{ 
    free(pst->fname); 
    free(pst->lname); 
}
