#include <stdio.h>

/**
* main - Afficher la suite logique avec des virgules et espases.
*
* Return: Always (0)
*/
int main(void)
{
	int e;

	for (e = '0'; e <= '9';)
	{
		if (e == e)
	    {
		    putchar(e + ', ');
			e++;
	    }
	}

	putchar('\n');

	return (0);
}
