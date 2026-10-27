#include <stdio.h>
#include <time.h>

/*
 * main - si positif, égale ou négatif à 0
 *
 * Return: Always (0)
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand(0) - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
