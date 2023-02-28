#include "main.h"
/**
 * puts_half - print the last half of a string
 * @s: a pointer
 * Return: nothing
 */
void puts_half(char *s)
{
	int i, even, start;
	int lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
		lenght += 1;
	lenght -= 1;
	if (lenght % 2 != 0)
		even = lenght - 1;
	else
		even = lenght;
	start = even / 2;

	for (i = start + 1; i <= lenght; i++)
		_putchar(s[i]);
	_putchar('\n');

}
