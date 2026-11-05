#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates at most n characters from src to dest
* @dest: The destination string to append to.
* @src: The source string to append.
 * @n: The maximum number of characters to append.
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
	while (n > 0 && *src)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}
	*d = '\0';
	return (dest);
}
