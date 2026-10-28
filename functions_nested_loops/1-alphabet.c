#include "main.h"

/**
* print_alphabet - Affiche l'alphabet avec un prototype différent.
*
* Return: Always 0.
*/
int print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		_putchar (a++);
	}
	_putchar ('\n');

	return (0);
}
