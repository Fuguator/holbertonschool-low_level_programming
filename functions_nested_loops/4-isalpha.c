#include "main.h"
/**
 * _isalpha - checks if c is letter
 * @c: vatiable that we check
 * Returm: 1 if c letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
