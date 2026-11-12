#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc -
* @nmemb:
* @size:
*
* Return:
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{

void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = calloc(nmemb, sizeof(unsigned int));

	if (s == NULL)
		return (NULL);

	return (s);
}
