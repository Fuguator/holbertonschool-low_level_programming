#include <stdio.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
void main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s ", argv[i]);
	printf("\n");
}
