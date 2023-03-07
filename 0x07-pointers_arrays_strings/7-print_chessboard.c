#include "main.h"
/**
 * print_chessboard - print all the elements in an array
 * @a: a pointer to an array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	char k;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
		k = a[i][j];
		_putchar(k);
	}
		_putchar('\n');
	}
}
