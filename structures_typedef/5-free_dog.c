#include <stdio.h>
#include "dog.h"
/**
 * free_dog- Structure représentant un chien
 * @d:pointeur
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	
	free(d->name);
	free(d->owner);
	free(d);
}
