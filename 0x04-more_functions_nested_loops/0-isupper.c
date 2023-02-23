#include "main.h"

/**
 * _isupper - check if an alphabet is in upper case
 *
 * _isupper - it check if an entry is in upper case
 * @c: integer of the value it takes in
 * Return: 1 if true otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
