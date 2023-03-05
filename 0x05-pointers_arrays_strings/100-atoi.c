#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: a pointer
 * Return: an integer
 */
int _atoi(char *s)
{
	int a;
	int result = 0;
	int end_loop = 0;
	int sign = 1;
	int if_number = 0;

	for (a = 0; s[a] != '\0' && end_loop == 0; a++)
	{
		if (s[a] == '-')
			sign = -1 * sign;
		else if (s[a] >= '0' && s[a] <= '9')
		{
			result = result * 10 + (s[a] - '0');
			if_number = 1;
		}
		if (if_number > 0)
		{
			if (s[a + 1] >= '0' && s[a + 1] <= '9')
				continue;
			else
				end_loop = 1;
		}
	}
	result = sign * result;
	if (result == 0)
		return (0);
	else
		return (result);
}
