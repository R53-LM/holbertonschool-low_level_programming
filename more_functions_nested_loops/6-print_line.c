#include "main.h"

/**
* print_line - draws a straight line in the terminal
*@n:n is the number of times the character _ should be printed
*
*/
void print_line(int n)
{
n = 95;
	if (n >= 0)
	{
		_putchar(n++);
	}
	else
	{
		_putchar('\n');
	}
}
