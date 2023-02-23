#include "main.h"

/**
 * 
 * times_table - this print times table
 * @void: does not take any parameter
 * Return: nothing
 */

void times_table(void)
{
	for (int a = 0; a <= 9; a++)
	{
		int c = 0;
		for (int b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c < 10)
			{
			_putchar(c + '0');
			}
			else
			{
				_putchar((c/10) + '0');
				_putchar((c%10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

			}
			else 
				_putchar('\n');
		}
	}
}
