#include <stdio.h>
/**
 * main - func
 * Return: 0
 */
int main(void)
{
	int a;

	while (a++ < 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz ");
		else if ((a % 3) == 0)
			printf("Fizz ");
		else if ((a % 5) == 0)
		{
			printf("Buzz ");

			if (a != 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
