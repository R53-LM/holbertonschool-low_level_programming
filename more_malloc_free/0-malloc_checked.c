#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory, or exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{

int *s;

	if (b == NULL)
	{
		return (NULL);
	}

	s = malloc(b * sizeof(unsigned int));

	if (s == NULL)
	{
		exit(98);
	}
	return (0);
}
