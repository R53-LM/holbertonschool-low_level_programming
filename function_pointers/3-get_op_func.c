#include "3-calc.h"

/**
 * get_op_func - Selects the function associated with an operator
 * @s: The operator passed as an argument
 *
 * Return: A pointer to the corresponding function,
 * or NULL if the operator is invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && strcmp(s, ops[i].op))
	{
		i++;
	}

	return (ops[i].f);
}
