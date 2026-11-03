#include "main.h"
#include <stdio.h>

/**
* _strlen - calculates the number of characters in a string
*@s: string to measure
* Return: the number of characters in the string
*/
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
