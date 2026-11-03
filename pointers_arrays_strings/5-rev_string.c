#include "main.h"
#include <stdio.h>

/**
* rev_string - create, send, then return and resend the values
*@s: Select a channel and start at 10
*
*/
void rev_string(char *s)
{
int c = 0;

int debut = 0;

int fin;

char r;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	fin = c;
	for (; debut < fin;)
	{
		r = s[debut];
		s[debut] = s[c];
		s[c] = r;
		c--;
		debut++;
	}
}
