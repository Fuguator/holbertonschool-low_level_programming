#include <stdio.h>

/**
 *main - prints all letters in the alphaber order
 *Return: returns 0
 */

int main(void)
{
	char letters;

	for(letters = 97; letters <= 122; letters++)
		putchar(letters);

	putchar("\n");

	return(0);
}
