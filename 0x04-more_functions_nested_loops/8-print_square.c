#include "main.h"

/**
 * print_square - print a square
 * @size: it is an integer
 * Return: nothing
 */

void print_square(int size)
{
	int a;

	a = 1;
	if (size > 0)
	{
	while (a <= size)
	{
		int b;

		b = 1;
		while (b <= size)
		{
			_putchar('#');
			b += 1;
		}
		a += 1;
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
