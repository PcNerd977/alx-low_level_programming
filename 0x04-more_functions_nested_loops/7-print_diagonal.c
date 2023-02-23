#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: integer
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a;

	a = 1;
	if (n > 0)
	{
	while (a <= n)
	{
		int b;

		b = 1;
		while (b <= a)
		{
			if (a == b)
				_putchar('\\');
			else
				_putchar(' ');
			b += 1;
		}
		a += 1;
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
