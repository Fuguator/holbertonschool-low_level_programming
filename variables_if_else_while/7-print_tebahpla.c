#include <stdio.h>
/**
 * main - prints alphabete in reverse
 * Return: returns 0
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
