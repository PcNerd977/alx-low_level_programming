#include "main.h"

/**
 * print_triangle - draw triangle with # on the console
 * @size: integer
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
	a = size;

	while (a > 0)
	{
		b = 1;
		while (b <= size)
		{
			if (b >= a)
				_putchar('#');
			else
				_putchar(' ');

			b += 1;
		}
		_putchar('\n');
		a -= 1;
	}
	}
	else
		_putchar('\n');
}
