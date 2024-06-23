#include <stdio.h>
/**
 * main - func
 * Return: 0
 */
int main(void)
{
	unsigned long int n, num1 = 0, num2 = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;

		if (n != 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
