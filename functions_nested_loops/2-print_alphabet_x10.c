#include "main.h"

/**
* print_alphabet_x10 - Afficher 10 fois l'alphabet.
*
*
*/
void print_alphabet_x10(void)
{
	char a;

	int b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		    _putchar (a);
		}
	_putchar ('\n');
	}

}
