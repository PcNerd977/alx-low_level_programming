#include <stdio.h>
/**
 *main - This program print all the possible combination of two
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
				if (a <= c)
				{
					if (a == c && b >= d)
						;
					else
					{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57 && b == 56 && c == 57 && d == 57)
						;
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
