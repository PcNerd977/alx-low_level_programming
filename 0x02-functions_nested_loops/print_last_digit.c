#include "main.h"

/**
 * print_last_digit - print the last digit of a value
 *
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int b;
	b = a % 10;
	if (b >= 0)
	{
		_putchar('0' + b);
		return (b);
	}
	else 
	{
		b = -1 * b;
		_putchar('0' + b);
		return (b);
	}
}
