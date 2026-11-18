#include <stdio.h>

/**
 * main - print each argument
 * @argc: the number of elements in argv
 * @argv: an array of pointers to character strings, terminated by NULL.
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
