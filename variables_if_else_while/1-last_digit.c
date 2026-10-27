#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main- 
*
* Return: Alweys (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d", n);

	if (n > 5)
	{
		printf("and is greater than %d\n", n);
	}
	if (n == 0)
	{
		printf("and is %d\n", n);
	}
	if (n < 6)
	{
		printf("and is less than %d and not 0\n", n);
	}
	return (0);
}
