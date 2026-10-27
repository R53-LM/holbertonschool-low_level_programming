#include <stdio.h>

/**
* main - affiche l'alphabet a l'envers avec seulement deux appels à putchar.
*
* Return: Always (0)
*/
int main(void)
{
	char c;

	c = 'z';

	while (c <= 'a')
	{
		putchar(c--);
	}

	putchar('\n');

	return (0);
}
