#include "main.h"

/**
 * print_alphabet - print all the alphabets in lower case
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
