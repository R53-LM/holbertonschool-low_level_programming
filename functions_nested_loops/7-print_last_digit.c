#include "main.h"

/**
* print_last_digit - this fonction is take in main.h
* @d: This integer is what we want to check
*
* Return: d print last digit of a number
*/
int print_last_digit(int d)
{

int f;

	if (d < 0)
	{
		d = -d;
	}

	f = d % 10;

	_putchar('0' + f);
	return (10);
}
