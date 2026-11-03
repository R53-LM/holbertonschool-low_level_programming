#include "main.h"
#include <stdio.h>

/**
* _puts - print string 
*@str: string to measure
* Return:
*/
void _puts(char *str)
{
int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}
	printf("%s\n", str);

}
