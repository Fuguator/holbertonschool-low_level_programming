#include <stdio.h>
#include <stdlib.h>
/**
 * opc - func
 * @main_ptr: var
 * @i: var
 * Return: 10
 */
int opc(int (*main_ptr)(int, char **), int i)
{
	int a = 0;

	for (; a < i - 1; a++)
		printf("%02x ", ((unsigned char *)main_ptr)[i]);
	printf("%02x", ((unsigned char *)main_ptr)[i]);
	return (10);
}
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}
	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error");
		exit(2);
	}
	putchar(opc(main, i));
	return (0);
}
