#include "dog.h"
#include <stdio.h>
/**
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if ((*d).name != NULL)
			printf("%s\n", (*d).name);
		else
			printf("(nil)\n");
		if (!(*d).age)
			printf("%f\n", 0.);
		else
			printf("%f\n", (*d).age);
		if ((*d).owner != NULL)
			printf("%s\n", (*d).owner);
		else
			printf("(nil)\n");
	}
}
