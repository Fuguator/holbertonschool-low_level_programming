#include "3-calc.h"
/**
 * get_op_func - func
 * @s: var
 * Return: NULL
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (i < sizeof(ops) / sizeof(opt_t))
    {
	    if (*s == *ops[i].s)
		    return (ops[i].f);
	    i++;
    }
    return (NULL);
}
