/* funds3.c -- передача структуры */ 
#include <stdio.h> 
#define FUNDLEN 50 
struct funds { 
    char bank[FUNDLEN]; 
    double bankfund; 
    char save[FUNDLEN]; 
    double savefund; 
}; 
double sum(struct funds moolah);   /* аргумент есть структура */ 
int main(void) 
{
    struct funds stan = { 
        "Garlic-Melon Bank", 
        3024.72, 
        "Lucky's Savings and Loan", 
        9237.11 
    }; 
    printf("Сумма на счету у Стэна составляет $%.2f.\n", sum(stan)); 
    return 0; 
} 
double sum(struct funds moolah) 
{ 
    return(moolah.bankfund + moolah.savefund); 
} 
