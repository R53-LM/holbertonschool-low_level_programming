#include <stdio.h>

/*
 * main - Utilisation de if..elseif else avec une variable random
 *
 * Return: Always (0)
 **/
int main(void)
{
	int n;

	if (n>0)
	{
	printf("%dis positive%d\n",n++);
	}
	elseif (n==0)
	{
		printf("%dis zero%d\n",n++);
	}
	else (n<0)
	{
		printf("%dis negative%d\n",n++);
	}
}