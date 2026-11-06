#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any character from a set
 * @s: the string to search
 * @accept: the set of characters to search for
 *
 * Return: a pointer to the first matching character, or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0' && s[i + j] == accept[j]; j++)
		{
			if (accept[j] == '\0')
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
