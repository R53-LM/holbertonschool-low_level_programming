#include "main.h"
#include <stdlib.h>

/**
 * main - print each argument
 * @argc: the number of elements in argv
 * @argv: an array of pointers to character strings, terminated by NULL.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, a, b;
	(void)argv;
	for (i = 1; i < argc; i++)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);
}
