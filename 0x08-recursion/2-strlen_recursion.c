#include "main.h"

/**
 * _strlen_recursion - calculate the lenght of a string
 * @s: a pointer to an array
 * Return: an integer of the lenght
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		i = 0;
		return (i);
	}
	return (1 + _strlen_recursion(s + 1));
}
