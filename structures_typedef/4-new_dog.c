#include <stdlib.h>
#include "dog.h"
/**
 * new_dog- Structure représentant un nouveau chien
 * @name:Nom du chien
 * @age:Age du chien
 * @owner:Nom du propriétaire
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *s;
char *r;
char *v;
int i;
int j;
	s = malloc(sizeof(dog_t));
	if (s == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++);
	for (j = 0; owner[j] != '\0'; j++);
	r = malloc(sizeof(char) * (i + 1));
	if (r == NULL)
	{
		free(s);
		return (NULL);
	}
	v = malloc(sizeof(char) * (j + 1));
	if (v == NULL)
	{
		free(r);
		free(s);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		r[i] = name[i];
	r[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		v[j] = owner[j];
	v[j] = '\0';
	s->name = r;
	s->age = age;
	s->owner = v;
	return (s);
}
