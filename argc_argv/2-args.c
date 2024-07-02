#include <stdio.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
char **main(int argc, char *argv)
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 1; i < argc; i++)
		printf("%d", argv[i]);
	return (0);
}
