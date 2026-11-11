#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked -
* @b:
*
* Return: Nothing.
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

}
