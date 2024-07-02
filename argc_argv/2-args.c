#include <stdio.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
		printf("%s ", argv[i]);
	printf("\n");
	return (0);
}
