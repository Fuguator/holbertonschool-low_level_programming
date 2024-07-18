#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0' || (get_op_func(argv[2]) == NULL))
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]), b = atoi(argv[3]);

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}

