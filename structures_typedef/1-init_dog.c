#include "dog.h"
/**
 * init_dog - func
 * @d: var
 * @name: var
 * @age: var
 * @owner: var
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
