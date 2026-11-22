#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_int - 
 * @va_list:
 * @sep:
 */
void print_int(va_list ap, char *sep)
{
	printf("%s%d", sep, va_arg(ap, int));
}
/**
 * print_char - 
 * @va_list:
 * @sep:
 */
void print_char(va_list ap, char *sep)
{
	printf("%s%c", sep, va_arg(ap, int));
}
/**
 * print_float - 
 * @va_list:
 * @sep:
 */
void print_float(va_list ap, char *sep)
{
	printf("%s%f", sep, va_arg(ap, double));
}
/**
 * print_str - 
 * @va_list:
 * @sep:
 */
void print_str(va_list ap, char *sep)
{
	char *s = 0;
	s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("%s(nil)", sep);
		return;
	}
	printf("%s%s", sep, s);
}


/**
 * print_all - 
 * @format: 
 *
 */
void print_all(const char * const format, ...)
{

	va_list ap;
	int i = 0;
	int j;
	char *sep = ", ";

	va_start(ap, format)

	{'c', print_char};
	{'i', print_int};
	{'f', print_float};
	{'s', print_str};

	while (format[i] && format)	/*raccourcis pour avancer dans format*/
	{
		j = 0;
		while (f[j]type)

		if (ap, sep)
	}



	va_end(ap);
	printf("\n");
}
