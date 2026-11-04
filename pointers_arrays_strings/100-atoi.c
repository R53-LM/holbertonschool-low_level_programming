#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int signe = 1;

int i = 0;

int result = 0;

int started = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == '-' && started == 0)
		{
			signe = signe * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			started = 1;
		}
		if ((s[i] < '0' || s[i] > '9') && started == 1)
		{
			break;
		}
	}

	return (result * signe);


}
