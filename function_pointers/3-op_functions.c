#include "3-calc.h"

/**
 * op_add - fonction d'addition
 * @a: première valeur
 * @b: deuxième valeur
 * Return: la somme de l'opération
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - fonction de soustraction
 * @a: première valeur
 * @b: deuxième valeur
 * Return: la différence de l'opération
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - fonction de multiplication
 * @a: première valeur
 * @b: deuxième valeur
 * Return: le produit de l'opération
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - fonction de division
 * @a: première valeur
 * @b: deuxième valeur
 * Return: le quotient de l'opération
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - fonction de modulo
 * @a: première valeur
 * @b: deuxième valeur
 * Return: le reste de l'opération
 */
int op_mod(int a, int b)
{
	return (a % b);
}
