#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char **argv)
{
	int i;
	unsigned int sum = 0, x;
	char *a;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			a = argv[i];
			for (x = 0; x < strlen(a) - 1; x++)
			{
				if ((a[x] < 48) && (a[x] > 57))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a), a++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);
}
