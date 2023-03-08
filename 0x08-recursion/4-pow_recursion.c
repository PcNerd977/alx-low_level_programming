#include "main.h"

/**
 * _pow_recursion - calculate the x raise to a power y
 * @x: an integer of the base
 * @y: an integer value of the power
 * Return: an integer of the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
