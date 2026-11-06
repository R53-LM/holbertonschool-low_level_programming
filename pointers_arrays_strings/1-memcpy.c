#include "main.h"
#include <stdio.h>

/**
* _memcpy -
* @dest:
* @src:
* @n:
*
* Return:
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	int i = 0;

	for (; dest[i] != '\0'; i++)
	{
		dest = src;
		n++;
		src++;
	}
	return (src);
}
