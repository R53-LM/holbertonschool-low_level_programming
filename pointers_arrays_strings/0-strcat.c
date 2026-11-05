#include "main.h"
#include <stdio.h>

/**
* _strcat - check the code
* @dest: The destination string to append to.
* @src: The source string to append.
*
* Return: A pointer to the destination string.
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
