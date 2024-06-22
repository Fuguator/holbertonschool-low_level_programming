#include <stdio.h>

/**
 *main - prints all letters in the alphaber order
 *Return: returns 0
 */

int main(void)
{
	char x;

	for(x = "a"; x <= "z"; x++)
		putchar(x);

	putchar("\n");

	return(0);
}
