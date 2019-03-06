// names_st.h -- заголовочный файл для структуры names_st
// константы
#define SLEN 32
// объявление структуры
struct names_st
{
  char first[SLEN];
  char last[SLEN];
};
// определения типов
typedef struct names_st names;
// прототипы функций
void get_names(names *);
void show_names(const names *);
