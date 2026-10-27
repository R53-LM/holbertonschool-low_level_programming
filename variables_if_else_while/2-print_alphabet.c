#include <stdio.h>

/**
* main - afficher 26 lettres avec seulement deux appels à putchar.
*
* Return: Always (0)
*/
int main(void)
{
	char c;

	c = 'a';

	while(c <= 'z')
	{
		putchar(c++);
	}
	{
		putchar('\n');
	}

	return (0);
}
