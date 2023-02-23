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

		for (b = 48; b <= 57; b++)
			_putchar(b);
		_putchar('\n');
		a += 1;
	}
}
