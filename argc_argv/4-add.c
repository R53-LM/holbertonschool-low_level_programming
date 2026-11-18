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
	int i, result;

	if (argc == 1)
		printf("0\n");

	if (argv[])
	{
		printf("Erreur\n");
		return (1);
	}

	result = atoi(argv[i]);

	printf("%d\n", result);
	return (0);
}
