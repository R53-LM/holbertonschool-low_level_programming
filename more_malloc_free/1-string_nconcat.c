#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 with the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to copy from s2
 *
 * Return: pointer to the concatenated string, or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s = s1;

char result;

char *r = s2;

	while (*s)
	{
		s++;
	}
	s = malloc(s1 * sizeof(char));

	if (s == NULL)
	{
		return ("");
	}

	while (*r)
	{
		r++;
	}
	if (n >= r)
	{

	}
	r = malloc(s2);

	if (r == NULL)
	{
		return ("");
	}
	result = s + r;

	return (result);
}
