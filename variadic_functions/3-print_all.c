#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - 
 * @format: 
 *
 */
void print_all(const char * const format, ...)
{

	va_list ap;
	char c;
	int i;
	float f;
	char *s;
	char *sep;
