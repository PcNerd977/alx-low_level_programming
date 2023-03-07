#include "main.h"
#include <stddef.h>
/**
 * _strchr - search for a character in a string
 * @s: a pointer
 * @c: a character
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	int end_loop = 0;
	char *ptr;

	for (i = 0; s[i] != '\0' && end_loop == 0; i++)
	{
		if (s[i] == c)
			end_loop = 1;
	}
	if (end_loop == 1)
		ptr = s + i - 1;
	else
		ptr = NULL;
	return (ptr);
}
