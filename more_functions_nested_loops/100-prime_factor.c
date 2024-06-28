#include <stdio.h>
/**
 * main - func
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	int a;

	while (a++ < num / 2)
	{
		if (num % a == 0)
		{
			num /= 2;
			continue;
		}
		for (a = 3; inc < num / 2; a += 2)
		{
			if (num % a == 0)
				num /= a;
		}
	}
	printf("%ld\n", num);
	return (0);
}
