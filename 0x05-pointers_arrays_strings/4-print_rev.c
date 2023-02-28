#include "main.h"
/**
 * print_rev - print the reverse string
 * @s: a pointer
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int lenght = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght += 1;
	}
	for (j = (lenght - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
