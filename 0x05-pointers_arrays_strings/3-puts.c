#include "main.h"
/**
 * _puts - prints all the elements in the string
 * @s: pointer
 * Return: nothing
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
