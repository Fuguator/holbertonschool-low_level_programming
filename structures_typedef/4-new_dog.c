#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - func
 * @s: pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
/**
 * _strcpy - func
 * @dest: variable
 * @src: variable
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, a;

	while (src[len] != '\0')
		len++;

	for (a = 0; a < len; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}
/**
 * new_dog - func
 * @name: var
 * @age: var
 * @owner: var
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lenName, lenOwner;

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	lenName = _strlen(name);

	(*dog).name = malloc(sizeof(char) * (lenName + 1));

	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	(*dog).name = _strcpy((*dog).name, name);
	(*dog).age = age;
	lenOwner = _strlen(owner);

	(*dog).owner = malloc(sizeof(char) * (lenOwner + 1));

	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}

	(*dog).owner = _strcpy((*dog).owner, owner);

	return (dog);
}
