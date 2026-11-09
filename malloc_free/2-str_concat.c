#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*str_concat - adds two strings together.
* @s1: first string to compare.
* @s2: second string to compare.
*
* Return: pointer to the copy string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{

int i;

int k;

int y;

char *a = s1;

char *b = s2;

char *s;

	if (s1 == 0)
	{
		return (0);
	}
	if (s2 == 0)
	{
		return (0);
	}
	for (i = 0; a[i] != 0; i++)
	{
	}
	for (y = 0; b[y] != 0; y++)
	{
	}

	s = malloc((i + y + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		s[k] = a[k];
		s[k] = b[k];
	}

	s[k] = '\0';
	return (s);
}
