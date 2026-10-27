#include <stdio.h>

/**
* main - afficher 26 lettres en suite logique sans le e et q.
*
* Return: Always (0)
*/
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q'; c++)
		{
			putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
