#include <stdio.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 1; i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
