#include "main.h"
#include <stdio.h>

/**
* _memset -
* @s:
* @b:
* @n:
*
* Return: Nothing.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
