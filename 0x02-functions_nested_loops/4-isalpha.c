#include "main.h"

/**
 * _isalpha - check if the entry is alphabet
 * @c - int value of the entry
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
