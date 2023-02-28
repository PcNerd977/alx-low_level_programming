#include "main.h"
/**
 * puts2 - print the other character in a string
 * @str: a pointer
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int lenght = 0;

	for (i = 0; str[i] != '\0'; i++)
		lenght += 1;

	for (i = 0; i < lenght; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
