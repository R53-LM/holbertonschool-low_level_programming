#include <stdio.h>
#include "dog.h"

/**
 * struct dog- Structure représentant un chien
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Nom du propriétaire
 * @d: pointeur
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
