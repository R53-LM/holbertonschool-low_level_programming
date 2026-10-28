#include "main.h"

/**
* main - Affiche l'alphabet avec un prototype différent.
*
* Return: Always 0.
*/
int main(void)
{
	char a;

	a = 'a';

	{
	print_alphabet(a <= 'z');
	_putchar (a++);
	_putchar ('\n');
	}

	return (0);
}
