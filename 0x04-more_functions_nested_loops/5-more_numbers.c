#include "main.h"

/**
 * more_numbers - print all the numbers from 0 to 14 x10
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int a;

	a = 1;
	while (a <= 10)
	{
		int b;
		int c;

		c = 48;
		for (b = 48; b <= 57; b++)
		{
			_putchar(b);
		}
		while (c <= 52)
		{
			_putchar('1');
			_putchar(c);
			c += 1;
		}
		_putchar('\n');
		a += 1;
	}
}
