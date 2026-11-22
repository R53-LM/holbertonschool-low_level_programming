#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct group_t
{
	char type;
	void(*tp)(va_list, char*);

} type_tout;

void print_int(va_list ap, char *sep);
void print_char(va_list ap, char *sep);
void print_float(va_list ap, char *sep);
void print_str(va_list ap, char *sep);

void print_all(const char * const format, ...);

#endif
