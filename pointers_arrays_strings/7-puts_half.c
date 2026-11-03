#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string
*@str: the entire string
*
*/
void puts_half(char *str)
{
int n = 0;
int i;
int start;

	for (; str[n] != '\0'; n++);

start = n - ((n + 1) / 2);
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	_putchar('\n');
}
