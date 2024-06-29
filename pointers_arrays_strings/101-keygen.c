#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - func
 * Return: 0
 */
int main(void)
{
	int pasw[100], i, n, sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pasw[i] = rand() % 67;
		sum += (pasw[i] + '0');
		putchar(pasw[i] + '0');
		if ((2381 - sum) - '0' < 67)
		{
			n = 2381 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
