#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - func
 * @str: string
 * Return: duplicated str
 */
char *_strdup(char *str)
{
	char* a = (char*)malloc(strlen(str)+1);
        return (a);
}
