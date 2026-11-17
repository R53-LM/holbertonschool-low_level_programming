#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name:
 * f -
 * @char:
 * 
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL)
		return (NULL);

	if (f == NULL)
		return (NULL);
}
