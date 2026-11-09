#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 * @size: The size of the array.
 * @c: The character to fill the array with.
 *
 * Return: A pointer to the array, or NULL if size is 0 or allocation fails.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;

char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (; i < size; i++)
	{
		p[i] = c;
	}

	return (p);

}
