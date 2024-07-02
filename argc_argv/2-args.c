#include <stdio.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char *argv)
{
	int i;

	printf("%d\n", argc);
	for (i = 0; i < argc; i++)
		printf(i, "\n");
	return (0);
}
