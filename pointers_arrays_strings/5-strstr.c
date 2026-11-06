#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: a pointer to the first matching character, or NULL if none is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
		}
	}
	return (NULL);
}
