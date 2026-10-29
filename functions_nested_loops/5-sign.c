#include "main.h"

/**
* print_sign - check the code.
*
* Return:
*/
int print_sign(int n)
{

	if (n > '0')
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');

		return (1);

		_putchar('\n');
	}
	else if (n == '0')
	{
		_putchars(n);
		_putchar(',');
		_putchar(' ');

		return (0);

		_putchar('\n');
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');

		return (-1);

		_putchar('\n');
	}
