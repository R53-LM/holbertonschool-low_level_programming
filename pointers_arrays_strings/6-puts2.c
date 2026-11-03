#include "main.h"
#include <stdio.h>

/**
* puts2 - prints every other character of a string
*@str: the entire string
*
*/
void puts2(char *str)
{

int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 != 1)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
