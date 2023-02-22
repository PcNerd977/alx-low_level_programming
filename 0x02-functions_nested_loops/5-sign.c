#include "main.h"

/**
 * print_sign - check if a number is positive, negative or zero
 * @n - 
 * Return: -1 if negative, +1 if positve or 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
