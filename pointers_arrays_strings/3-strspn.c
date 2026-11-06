#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix of a string made of accepted chars.
 * @s: string to be scanned
 * @accept: string containing the accepted characters
 *
 * Return: the number of bytes in the initial segment of s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	int j;

	int trouve;


	for (i = 0; s[i] != '\0'; i++)
	{

		trouve = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				trouve = 1;
				break;
			}
		}
		if (trouve == 0)
		{
			return (i);
		}

	}
	return (trouve);
}
