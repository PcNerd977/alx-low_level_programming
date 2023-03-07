#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - search a string for a particular string
 * @s: a pointer to the string to be scearched
 * @accept: a pointe to the string we are using as search
 * Return: a pointer to the matched string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int end_loop = 0;
	int end_iner_loop = 0;
	char *ptr;

	for (i = 0; s[i] != '\0' && end_loop == 0; i++)
	{
		for (j = 0; accept[j] != '\0' && end_iner_loop == 0; j++)
		{
			if (s[i] == accept[j])
			{
				end_iner_loop = 1;
				end_loop = 1;
			}
		}
	}
	if (end_loop == 1)
		ptr = s + i - 1;
	else
		ptr = NULL;
	return (ptr);
}
