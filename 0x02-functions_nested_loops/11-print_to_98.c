#include "main.h"	
#include <stdio.h>

/**
 * print_to_98 - print all natural number
 *
 * @n: integer value
 * Return: nothing
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n -= 1;
			if (n >= 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
else 
	{
		while (n <= 98)
		{
			printf("%d", n);
			n += 1;
			if (n <= 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}

}
