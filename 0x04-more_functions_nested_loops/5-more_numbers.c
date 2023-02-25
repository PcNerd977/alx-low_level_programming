#include "main.h"

/**
 * more_numbers - print all the numbers from 0 to 14 x10
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		int b;

		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
