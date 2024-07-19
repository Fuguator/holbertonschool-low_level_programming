#include <stdio.h>
#include <stdlib.h>
/**
 */
void opc(int i, int (*main_ptr)(int, char **))
{
	int a = 0;

	for (; a < i; a++)
		printf("%02x ", ((unsigned char *)(*main_ptr + i)));
}
/**
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

	return(0);
}
