#include <stdio.h>

/**
 *main - this program prints all the possible combination of three digits
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			if (a < b)
			{
				c = 48;
				while (c <= 57)
				{
					if (b < c)
					{
						putchar(a);
						putchar(b);
						putchar(c);
					if (a < 55)
					{
						putchar(',');
						putchar(' ');
					}
					}
					c += 1;
				}
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
