#include <stdio.h>

/**
 *main - prints all letters in the alphaber order
 *Return: returns 0
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);

	putchar ('\n');

	return (0);
}
