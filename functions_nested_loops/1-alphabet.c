/* File: 1-alphabet.c */
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
    char letter = 'a';  // Start with 'a', the first lowercase letter
    while (letter <= 'z')
    {
        _putchar(letter);  // Print the current letter
        letter++;          // Move to the next letter in the alphabet
    }
    _putchar('\n');        // Print a new line after printing all letters
}

