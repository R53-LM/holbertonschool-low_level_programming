#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: is (bob) in main.c
 *
 * @f: is fonction of print_name_as_is
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
