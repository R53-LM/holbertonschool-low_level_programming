#include "main.h"
#include <stdio.h>

/**
* _memset - fills the first n bytes of memory with the constant byte b
* @s: pointer to the memory area
* @b: byte to fill the memory area with
* @n: number of bytes to fill
*
* Return: pointer to the memory area s
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
