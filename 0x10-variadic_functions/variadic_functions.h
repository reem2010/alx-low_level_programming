#ifndef VARIADIC_H
#define VARIADIC_H
char _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/*void print_c(char c);*/
/*void print_i(int i);*/
/*void print_s(char *s);*/
/*void print_f(float f);*/
/**
 * struct type - struct type
 * @c: type of data
 * @p: pointer to a function
 */
/*typedef struct type*/
/*{*/
/*	char c;*/
/*oid (*p)(char *)*/
/*type_s;*/
void print_all(const char * const format, ...);
#endif
