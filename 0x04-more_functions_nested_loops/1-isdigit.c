#include "main.h"

/**
 * _isdigit - check if an entry is a digit
 *
 * @c: integer value
 *
 * Return: 1 if digit and 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
