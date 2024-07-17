#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 */
int main(int argc, char** argv)
{
	int i, j;
	char *op = argv[2];

	if (argc != 4)
		exit (98);

	i = atoi(argv[1]), j = atoi(argv[3]);

	if(strlen(op) > 1 || (*op != ('+' && '-' && '/' && '*')))
		exit (99);

	if (*op == (('/' && '%') && 0))
		exit (100);

	printf("%d/n", get_op_func(op)(i, j));

	return (0);
}
