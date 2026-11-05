#include "main.h"
#include <stdio.h>

/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @str: string to modify
*
* Return: pointer to the modified string
*/
char *string_toupper(char *str)
{
int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
	}
	return (str);
}
