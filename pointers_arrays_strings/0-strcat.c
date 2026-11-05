#include "main.h"
#include <stdio.h>

/**
* _strcat - check the code
* @dest:
* @src:
*
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
char *p = dest;

while(*p)
{
	p++;
}

while(*src)
{
	*p = *src;
	p++;
	src++;
}

return (dest);

}
