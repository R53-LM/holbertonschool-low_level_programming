#include "main.h"

/**
* print_square - draws a square with #
*@size:is the number of times the character # should be printed
*
*/
void print_square(int size)
{
int lig;

int col;

	if (size > 0)
	{
		for (lig = 1; lig <= size; lig++)
		{

			for (col = 2; col <= size; col++)
			{
			_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
