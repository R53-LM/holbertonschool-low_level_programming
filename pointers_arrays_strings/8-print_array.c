#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints the elements of an array of integers.
 * @a: The array to print.
 * @n: The number of elements to print.
*
*/
void print_array(int *a, int n)
{
int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf("%c ", 44);
		}
	}
	printf("\n");
}
