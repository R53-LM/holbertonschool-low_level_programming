#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings.
 * @separator: displays commas and spaces between each digit.
 * @n: displays several numbers.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *c;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
