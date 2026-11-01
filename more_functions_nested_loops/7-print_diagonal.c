#include "main.h"

/**
* print_diagonal - draws a straight line in the terminal
*@n:n is the number of times the character \ should be printed
*
*/
void print_diagonal(int n)
{
int c = 92;

int i = 0;

	for (; i < n;)
	{
		_putchar(' ');
		i++;
	}
	{
		_putchar(c);
		_putchar('\n');
	}
}
