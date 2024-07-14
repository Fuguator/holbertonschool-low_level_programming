#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
 * struct dog - struct
 * @name: var
 * @age: var
 * @owner: var
 * Description: txt
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif