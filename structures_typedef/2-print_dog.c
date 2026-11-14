#include <stdio.h>
#include "dog.h"
/**
 * print_dog- Structure représentant un chien
 * @d:pointeur
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		return;
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n");

	if (d->owner == NULL)
		return;
	else
		printf("Owner: %s\n");

}
