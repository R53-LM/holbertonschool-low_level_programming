#include "main.h"
#include <stdio.h>

/**
* main - check the code for
*@a:
*
* Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{
int row;

int col;

row = 0;

	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
