#include "function_pointer.h"
#include <stdlib.h>
#include <string.h>
/**
 */
int main(int argc, char** argv)
{
	int i, j;
	char *a = argv[2];

	if (argc != 4)
		exit (98);

	i = atoi(argv[1]), j = atoi(argv[3]);

	if(strlen(a) > 1 || (*a != ('+', '-', '/', '*')))
		exit (99);

	if (*a == (('/', '%') && 0))
		exit (100);

	printf("%d/n", get_op_func(i, j));

	return (0);
}
