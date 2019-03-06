/* hotel.h -- константы и объявления для программы hotel.c */ 
#define QUIT 5 
#define HOTEL1     80.00 
#define HOTEL2    125.00 
#define HOTEL3    155.00 
#define HOTEL4    200.00 
#define DISCOUNT    0.95 
#define STARS "**********************************" 
// показывает список возможных вариантов 
int menu(void); 
// возвращает количество суток, на которое резервируется номер 
int getnights(void); 
// вычисляет стоимость с учетом тарифов и количества суток 
// и отображает результат вычислений 
void showprice(double rate, int nights);
