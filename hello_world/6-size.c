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

	printf("size of int:\n", (unsigned long)sizeof(a));
	printf("size of long int:\n", (unsigned long)sizeof(b));
	printf("size of float:\n", (unsigned long)sizeof(c));
	printf("size of char:\n", (unsigned long)sizeof(d));
	return (0);
}
