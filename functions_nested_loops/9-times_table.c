#include "main.h"

/**
* times_table - entry point in main.h
*
*/
void times_table(void)
{
int a;

int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int p;

			p = a * b;
			if (p > 9)
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p <= 9)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar((p % 10) + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
