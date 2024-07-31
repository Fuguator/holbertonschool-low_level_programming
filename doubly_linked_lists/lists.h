#ifndef LISTS_H
#define LISTS_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
int _putchar(char c);
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
#endif
