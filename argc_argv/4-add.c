#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	while (i < argc - 1)
	{
		if ((argv[i] >= 'a' && argv[i] <= 'z') || (argv[i] >= 'A' && argv[i] <= 'Z'))
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
	return (0);
}
