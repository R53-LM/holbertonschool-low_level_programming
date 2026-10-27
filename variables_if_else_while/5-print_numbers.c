#include <stdio.h>

/**
* main - afficher 26 lettres en suite logique sans le e et q.
*
* Return: Always (0)
*/
int main(void)
{
	char e;

	e = '0';

	while (e <= '9')
	{
		putchar(e++);
	}
	{
		putchar(\n);
	}
}
