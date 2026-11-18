#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - 
 * @n: 
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int som;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		som += va_arg(ap, int);
	va_end(ap);
	return (som);
}
