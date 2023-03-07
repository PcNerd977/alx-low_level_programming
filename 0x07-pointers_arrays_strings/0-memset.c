#include "main.h"

/**
 * _memset - set a block of memory with a constant byte
 * @s: a pointer
 * @b: a character you want to store
 * @n: the size of byte you want to store
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
