#include "main.h"
#include <stdio.h>

/**
* print_rev - print reverse characters
*@s: use string
*
*/
void print_rev(char *s)
{
int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;

	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');

}
