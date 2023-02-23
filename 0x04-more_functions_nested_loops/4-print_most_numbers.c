#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 *
 * Return : nothing
 */

void print_most_numbers(void)
{
	for (int a = 48; a <= 57; a++)
	{
		if (a == 50 || a == 52)
			;
		else
			_putchar(a);
	}
	_putchar('\n');
}
