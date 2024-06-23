#include <stdio.h>
/**
 * main - func
 * Return: 0
 */
int main(void)
{
	int n, num1 = 1, num2 = 2, sum;

	for (n = 0; n < 50; n++)
	{
		sum = num1 + num2;
		printf(sum);
		num1 = num2;
		num2 = sum;

		if (n != 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
