#include "main.h"

/**
 * print_line - draw a line on the console
 * @n: an integer
 * Return: nothing
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n -= 1;
	}
	_putchar('\n');
}
