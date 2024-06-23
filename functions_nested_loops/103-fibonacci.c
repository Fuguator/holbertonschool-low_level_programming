#include <stdio.h>
/**
 * main - func
 * Return: 0
 */
int main(void)
{
	unsigned long int num1 = 0, num2 = 1, sum;
	float res;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			res += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", res);

	return (0);
}
