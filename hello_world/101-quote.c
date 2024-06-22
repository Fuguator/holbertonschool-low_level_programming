#include <stdio.h>
#include <unistd.h>

/**
 * main - function
 * mess - contains text
 * write - writes value from mess
 * Return: returns 1
 */
int main(void)
{
	char *mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write (2, mess, 59);
	return (1);
}
