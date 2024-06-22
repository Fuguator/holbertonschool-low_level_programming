#include <stdio.h>

/**
 * main - print all base 10 digits
 * Return: returns 0
 */

int main(void)
{
	int digit;

	for (digit = 1; digit < 10; digit++)
		printf("%d", digit);

	printf("\n");
	return (0);
}
