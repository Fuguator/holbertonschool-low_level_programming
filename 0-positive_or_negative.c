#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random number 
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n > 0)
		printf("is positive\n")
	else if(n < 0)
		printf("is negative\n")
	else
		printf("is zero\n")

	return (0);
}
