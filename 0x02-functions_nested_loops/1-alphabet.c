#include <stdio.h>

/**
 * main - this program test my knowledge in using function
 *
 * Print_ alphabet -  print all the alphabets in lower case
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);

	}
putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
