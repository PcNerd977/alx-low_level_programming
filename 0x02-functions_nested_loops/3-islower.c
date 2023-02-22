#include "main.h"

/**
 * _islower - check if an alphabet is lower or uppercase
 *
 * @c -  takes in the alphabet to check
 * Return: 1 is successful
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
