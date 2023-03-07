#include "main.h"

/**
 * _strspn - search for a particular string in a string
 * @s: a pointer of the string we are searching in
 * @accept: a pointer pointing the string we are looking for
 * Return: an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int end_loop = 0;
	unsigned int count = 0;
	int end_iner_loop = 0;

	for (i = 0; s[i] != '\0' && end_loop == 0; i++)
	{
		end_iner_loop = 0;
		for (j = 0; accept[j] != '\0' && end_iner_loop == 0; j++)
		{
			if (s[i] == accept[j])
			{
				count += 1;
				end_iner_loop = 1;
			}
		}
		if (end_iner_loop != 1)
			end_loop = 1;
	}
	return (count);
}
