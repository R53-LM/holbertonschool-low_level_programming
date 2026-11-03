#include "main.h"
#include <stdio.h>

/**
* _strlen - calculates the number of characters in a string
* @s: is a pointers for make a string
*
*/
int _strlen(char *s)
{

int tp;

	while (tp != *s)
	{
		tp++;
	}

return (tp);
}
