#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * mess - contains text
 * write - writes value from mess
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, mess, 59);
	return (1);
}
