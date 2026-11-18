#include "variadic_function.h"

/**
 * print_numbers - function that prints numbers.
 * @separator: displays commas and spaces between each digit.
 * @n: displays several numbers.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
