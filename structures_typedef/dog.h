#ifndef DOG_H
#define DOG_H
/**
 * struct dog- Structure représentant un chien
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Nom du propriétaire
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
