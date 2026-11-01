#include "main.h"

/**
* more_numbers -
*
*/
void more_numbers(void)
{
int lig;

int col;

	for (lig = 0; lig <= 9; lig++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col > 9)
			{
				_putchar((col / 10) + '0');
			}
		_putchar((col % 10) + '0');
		}
	_putchar('\n');
	}
}
