#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * message - contains text
 * write - writes value from message
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(2, message, 59);
    return (1);
}
