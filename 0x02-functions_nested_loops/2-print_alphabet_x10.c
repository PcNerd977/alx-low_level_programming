#include "main.h"
/**
 * print_alphabet_x10 - print all the alphabet in lower case x10
 *
 * Return: nothing
*/
void print_alphabet_x10(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		int b;

		for (b = 97; b <= 122; b++)
			_putchar(b);
		_putchar('\n');
	}

}
