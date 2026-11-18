#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: is a numbers.
 * Return: the sum of all numbers.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int som = 0;
	
	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		som += va_arg(ap, unsigned int);
	va_end(ap);
	return (som);
}
