#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @str: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
int a = 0;
char b =

	for (; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z' && (a == 0 || str[a - 1] == ' '))
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
