#include <stdio.h>

/**
 *main - this program print all the possible combination of 2 digits
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');
	return (0);
}
