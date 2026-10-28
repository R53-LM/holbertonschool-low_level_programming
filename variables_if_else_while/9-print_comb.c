#include <stdio.h>

/**
* main - Afficher la suite logique avec des virgules, espases.
*
* Return: Always (0)
*/
int main(void)
{
	int e;

	for (e = 48; e <= 57; e++)
	{
		putchar (e);
	}
	if (e < 57)
	{
		putchar(',');
		putchar(' ');
		e++;
	}
	putchar('\n');

	return (0);
}
