#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strdup - duplicates a string
* @str: string to duplicate
*
* Return: pointer to the duplicated string, or NULL on failure
*/
char *_strdup(char *str)
{
char *p;

int i;
int v;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != 0; i++)
	{

	}
	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (v = 0; v < i; v++)
	{
		p[v] = str[v];
	}
	p[v] = '\0';
	return (p);
}
