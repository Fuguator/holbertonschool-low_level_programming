/* File: main.h */
#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
int _putchar(char c);
void print_alphabet(void);

#endif /* MAIN_H */

----------------------------
vim 1-alphabet.c

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

