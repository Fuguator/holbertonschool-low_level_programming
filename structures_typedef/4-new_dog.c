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
	int i = 0, lenName = 0, lenOwner = 0;

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	while (name != '\0')
		lenName++;
	while (owner != '\0')
		lenOwner++;

	(*dog).name = malloc(lenName + 1);

	if ((*dog).name == NULL)
	{
		free((*dog).name), free(dog);
		return (NULL);
	}

	(*dog).age = age;

	(*dog).owner = malloc(lenOwner + 1);

	if ((*dog).owner == NULL)
	{
		free((*dog).owner), free((*dog).name), free(dog);
		return (NULL);
	}

	strcpy((*dog).name, name), strcpy((*dog).owner, owner);

	return (dog);
}
