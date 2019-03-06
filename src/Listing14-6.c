/* funds2.c -- передача указателя на структуру */ 
#include <stdio.h> 
#define FUNDLEN 50 
struct funds { 
    char bank[FUNDLEN]; 
    double bankfund; 
    char save[FUNDLEN]; 
    double savefund; 
}; 
double sum(const struct funds *);       /* аргумент является указателем */ 
int main(void) 
{ 
    struct funds stan = { 
        "Garlic-Melon Bank", 
        3024.72, 
        "Lucky's Savings and Loan", 
        9237.11 
    }; 
    printf("Сумма на счету у Стэна составляет $%.2f.\n", sum(&stan)); 
    return 0; 
} 
double sum(const struct funds * money) 
{ 
    return(money->bankfund + money->savefund); 
}
