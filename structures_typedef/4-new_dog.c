#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - func
 * @name: var
 * @age: var
 * @owner: var
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(_strlen(name) + 1);

	if ((*dog).name == NULL)
	{
		free((*dog).name), free(dog);
		return (NULL);
	}

	(*dog).age = age;

	(*dog).owner = malloc(_strlen(owner) + 1);

	if ((*dog).owner == NULL)
	{
		free((*dog).owner), free((*dog).name), free(dog);
		return (NULL);
	}

	_strcpy((*dog).name, name), _strcpy((*dog).owner, owner);

	return (dog);
}
