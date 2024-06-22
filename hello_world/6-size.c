#include <stdio.h>

/**
 * main - function
 *
 * Return: void
 */

int main(void)
{
	int a;
	long int b;
	float c;
	char d;

	printf("size of int:", (unsigned long)sizeof(a));
	printf("size of long int:", (unsigned long)sizeof(b));
	printf("size of float:", (unsigned long)sizeof(c));
	printf("size of char:", (unsigned long)sizeof(d));
	return (0);
}
