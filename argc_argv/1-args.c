#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: print the number
 * @argv: not uses
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc == 1)
		return (0);
	printf("%d\n", argc);
	return (0);
}
