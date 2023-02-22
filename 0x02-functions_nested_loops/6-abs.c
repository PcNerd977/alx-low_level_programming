#include "main.h"

/**
 * _abs - return absolute value of the entry
 *
 * int - the value we are taking in
 * Return: return the value
 */

int _abs(int n)
{
	

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = (-1 * n);
		return (n);
	}
}
