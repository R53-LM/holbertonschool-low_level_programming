#include "main.h"
#include <stdio.h>

/**
* print_rev -
*@s:
* Return:
*/
void print_rev(char *s)
{
int c = 63;

	while (s[c] >= '\0')
	{
	    _putchar(s[c]);
	    c--;
	}
	_putchar('\n');

}
