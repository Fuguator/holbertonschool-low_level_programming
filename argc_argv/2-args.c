#include <stdio.h>
/**
 * main - func
 * @argc: var
 * @argv: var
 * Return: 0
 */
int main(int argc,`:wq char *argv[])
{
	int i;
	
	printf("%d\n", argc);
	for (i = 1; i < argc; i++)
		printf("%s", argv[i]);
	return 0;
}
