#include <stdio.h>

/**
* main - afficher 16 lettres min et 10 chiffres en suite logique.
*
* Return: Always (0)
*/
int main(void)
{
	char c;
	char d;

	c = '0';
	d = 'a';

	while (c <= '9')
	{
		putchar(c++);
	}

	while (d <= 'f')
	{
		putchar(d++);
	}
	{
		putchar('\n');
	}

	return (0);
}
