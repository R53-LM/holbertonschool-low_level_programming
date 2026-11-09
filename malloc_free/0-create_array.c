#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*
*
*
*/
char *create_array(unsigned int size, char c)
{
int *s = size;

char *p = c;


*s = malloc(sizeof(unsigned int));

*p = malloc(sizeof(char));

	if (p == NULL)
	{
		return (1);
	}
	if (s == NULL)
	{
		return (1);
	}

	free(p);
	free(s);
}
