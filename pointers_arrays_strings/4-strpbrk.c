#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Locates the first character in a string that matches a set.
 * @s: The string to search.
 * @accept: The characters to search for.
 *
 * Return: A pointer to the first matching character, or NULL if none is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int j;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
