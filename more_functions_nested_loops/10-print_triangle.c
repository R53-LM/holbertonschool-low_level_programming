#include "main.h"

/**
* print_triangle - draws a triangle with #
* @size:is the number of times the character # should be printed
*
*/
void print_triangle(int size)
{
int lig;

int col;
int big;

	if (size > 0)
	{
		for (lig = 1; lig <= size; lig++)
		{
			for (col = 0; col < size - lig; col++)
			{
				_putchar(' ');
			}
			for (big = 1; big <= size - col; big++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
