#include "main.h"
#include <stdio.h>

/**
* _strspn -
* @s:
* @accept:
*
* Return:
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
