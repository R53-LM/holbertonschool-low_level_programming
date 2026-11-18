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
	int i, result = 0;
	(void)argv;
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
		printf("%d\n", result);
	}
	return (result);
}
