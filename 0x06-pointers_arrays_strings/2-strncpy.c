#include "main.h"

/**
 * _strncpy - copy strings in to another string
 * @dest: destination pointer
 * @src: scource pointer
 * @n: integer, number of bytes
 * Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i]  = src[i];
	}
	for (i += 1; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
