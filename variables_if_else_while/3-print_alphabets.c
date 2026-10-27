#include <stdio.h>

/**
* main - afficher 26 lettres min/maj en suite logique.
*
* Return: Always (0)
*/
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = 'A';

	while (c <= 'z')
	{
		putchar(c++);
	}

	while (d <= 'Z')
	{
		putchar(d++);
	}
	{
		putchar('\n');
	}

	return (0);
}
