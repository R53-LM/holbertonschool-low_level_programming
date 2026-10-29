#include "main.h"

/**
* print_sign - entry point.
* @n: character we want to check
*
* Return: 1 it's positiv, 0 for egal end -1 is negativ
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
