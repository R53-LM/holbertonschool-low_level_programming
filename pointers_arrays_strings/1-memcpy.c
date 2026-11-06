#include "main.h"
#include <stdio.h>

/**
*_memcpy - copies n bytes from src to dest
* @dest: destination memory area
* @src: source memory area
* @n: number of bytes to copy
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int index;


	for (index = 0; index != n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
