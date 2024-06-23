#include <stdio.h>
/**
 * main - func
 * Return: 0
 */
int main(void)
{
	unsigned long int num1 = 0, num2 = 1, sum, res;

	while (1)
	{
		sum = num1 + num2;
		if (sum <= 4000000)
			continue;
		if ((sum % 2) == 0)
			res += sum;

		num1 = num2;
		2 = sum;
	}
	printf("%lu", res);

	return (0);
}
