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

char *m;

unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	cal = nmemb * size;

	s = malloc(nmemb * sizeof(unsigned int));

	if (s == NULL)
		return (NULL);

	while (cal == 0)
		return (s);

	for (n = 0; m[n] != '\0'; n++)

}
