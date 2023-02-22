#include "main.h"

/**
 * jack_bauer - print all the minutes of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int a;
	for (a = 48; a <= 57; a++)
	{
		for (int b = 48; b <= 57; b++)
		{
			for (int c = 48; c <= 57; c++)
			{
				for (int d = 48; d <= 57; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
	}

}
