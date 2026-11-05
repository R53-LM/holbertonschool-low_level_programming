#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int a = 0;
int k = 0;
char *lettres = "aAeEoOtTlL";
char *chiffres = "4433007711";

	for (; str[a] != '\0'; a++)
	{
		for (k = 0; str[k] != '\0'; k++)
		{
			if (str[k] == lettres)
			{
				str[k] = chiffres;
			}
		}

	}
    return (str);
}
