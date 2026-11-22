#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_int - Prints an integer argument
 * @ap: List of arguments
 * @sep: Separator to print before the argument
 */
void print_int(va_list ap, char *sep)
{
	printf("%s%d", sep, va_arg(ap, int));
}
/**
 * print_char - Prints a character argument
 * @ap: List of arguments
 * @sep: Separator to print before the argument
 */
void print_char(va_list ap, char *sep)
{
	printf("%s%c", sep, va_arg(ap, int));
}
/**
 * print_float - Prints a float argument
 * @ap: List of arguments
 * @sep: Separator to print before the argument
 */
void print_float(va_list ap, char *sep)
{
	printf("%s%f", sep, va_arg(ap, double));
}
/**
 * print_str - Prints a string argument
 * @ap: List of arguments
 * @sep: Separator to print before the argument
 */
void print_str(va_list ap, char *sep)
{
	char *s = 0;
	s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("%s(nil)", sep);
		return;
	}
	printf("%s%s", sep, s);
}


/**
 * print_all - Prints anything according to its format
 * @format: String containing the types of arguments to print
 *
 * Description: Selects the appropriate function for each format
 * character and prints the corresponding argument.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	int j;
	char *sep = "";

	type_tout tout[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{0, NULL}
	};

	va_start(ap, format);

	while (format[i])	/*raccourcis pour avancer dans format*/
	{
		j = 0;
		while (tout[j].type != 0 && tout[j].type != format[i])
			j++;
		if (tout[j].type != 0)
		{
			tout[j].tp(ap, sep);
			sep = ", ";
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
