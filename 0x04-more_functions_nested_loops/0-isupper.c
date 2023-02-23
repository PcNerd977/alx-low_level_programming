#include "main.h"

/**
 * _isupper - check if an alphabet is in upper case
 *
 * @c: integer of the value it takes in
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
