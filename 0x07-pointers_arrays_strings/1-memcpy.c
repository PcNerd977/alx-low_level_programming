#include "main.h"

/**
 * _memcpy - copy a block of memory from one place to another
 * @dest: a pointer
 * @src: a pointer
 * @n: an integer
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
}
