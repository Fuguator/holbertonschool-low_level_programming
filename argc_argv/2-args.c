#include <stdio.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int i;

	for (i = 1; i < argc - 1; i++)
		printf("%s\n", argv[i]);
	return (0);
}
