#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocates memory for an array and initializes it to zero.
* @nmemb: number of elements.
* @size: size of each element.
*
* Return: pointer to allocated memory, or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;

unsigned int cal;

unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = nmemb * size;

	s = malloc(cal);

	if (s == NULL)
		return (NULL);

	for (n = 0; n < cal; n++)
		s[n] = 0;

	return (s);
}
