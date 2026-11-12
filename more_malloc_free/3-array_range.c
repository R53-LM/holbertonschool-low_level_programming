#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max
* @min: minimum value of the array
* @max: maximum value of the array
*
* Return:pointer to array or NULL
*/
int *array_range(int min, int max)
{
int *s;
int count;
int n = 0;

	if (min > max)
	{
		return (NULL);
	}
	count = max - min + 1;
	s = malloc(count * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	for (; n < count; n++)
	{
		s[n] = min + n;
	}
	return (s);
}
