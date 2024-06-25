#include "main.h"
/**
 * more_numbers - func
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				_putchar(b + c);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
