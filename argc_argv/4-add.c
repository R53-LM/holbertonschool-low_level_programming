#include "main.h"
#include <stdlib.h>

/**
 * main - display each argument and add them together
 * @argc: the number of elements in argv
 * @argv: an array of pointers to character strings, terminated by NULL.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
			result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
