#include "main.h"
#include <stdio.h>

/**
* _strcat - check the code
* @dest: The destination string to append to.
* @src: The source string to append.
* @n:
*
* Return: A pointer to the destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
char *d = dest;


	while (*d)
	{
		d++;
	}
	while (n)
	{
		*d = *src;
		d++;
		src++;
		n--;

	}
	return(dest);
}
