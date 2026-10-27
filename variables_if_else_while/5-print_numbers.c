#include <stdio.h>

/**
* main - afficher 10 chiffres en suite logique.
*
* Return: Always (0)
*/
int main(void)
{
	char e;

	e = '0';

	while (e <= '9')
	{
		putchar(e++);
	}
	{
		putchar(\n);
	}
}
