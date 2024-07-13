#include "dog.h"
#include <stdio.h>
/**
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if ((*d).name != NULL)
			printf("%s\n", (*d).name);
		else
			printf("(nil)\n");

		printf("Age: ");
		if (!(*d).age)
			printf("%f\n", 0.);
		else
			printf("%f\n", (*d).age);

		printf("Owner: ");
		if ((*d).owner != NULL)
			printf("%s\n", (*d).owner);
		else
			printf("(nil)\n");
	}
}
