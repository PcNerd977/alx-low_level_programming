#include <stdio.h>
/**
 * main - this program print all the combination of two pairs of 2 digits
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int a, b, c, d;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
			d = 48;
			while (d <= 57)
			{
				if ((a + b) < (c + d))
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57  && b == 56 && c == 57 && d == 57)
						;
					else
					putchar(',');
					putchar(' ');
					}
					d += 1;
				}
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
