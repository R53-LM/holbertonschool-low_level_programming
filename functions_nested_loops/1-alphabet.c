#include "main.h"

/**
* print_alphabet - Affiche l'alphabet.
*
* Return: Always 0.
*/
void print_alphabet(void)
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
