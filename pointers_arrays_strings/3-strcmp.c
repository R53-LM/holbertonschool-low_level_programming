#include "main.h"
#include <stdio.h>

/**
* _strcmp -
*
* Return:
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	int j = 0;

	while (*s1 && *s2)

	{
		if (*s1 < *s2)
		{
			i++;
		}
		else if (*s1 > *s2)
		{
			j++;
		}
		else
		{
			i++;
			j++;
		}

	}


}
