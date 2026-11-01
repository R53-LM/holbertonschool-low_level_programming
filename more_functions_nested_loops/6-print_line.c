#include "main.h"

/**
* print_line - draws a straight line in the terminal
*@n:n is the number of times the character _ should be printed
*
*/
void print_line(int n)
{
char c = '_';

int i = 0;

	for(; i < n; i++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
