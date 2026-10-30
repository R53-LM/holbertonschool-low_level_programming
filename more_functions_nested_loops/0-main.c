#include "main.h"
#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}


Écrivez une fonction qui vérifie si un caractère est en majuscule.

Prototype : int _isupper(int c) ;
Renvoie 1 si c est une majuscule
Renvoie 0 dans le cas contraire