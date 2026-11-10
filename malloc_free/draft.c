#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*  exercice malloc
*
*
*/

int allocate_int(void)
{
	int *value;

	int i;

	value = malloc(6 * sizeof(*value));

	if (value == NULL)
	{
		return (1);
	}
	for (i = 0; i <= 5; i++)
	{
		value[i] = i;
		printf("%d\n", *value);
	}

	free(value);
	return (0);
}
