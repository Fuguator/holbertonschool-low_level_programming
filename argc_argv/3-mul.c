#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv)
{
	int a = 0, b = 0, mul = 1;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
