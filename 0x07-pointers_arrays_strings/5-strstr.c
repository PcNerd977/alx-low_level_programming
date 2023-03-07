#include "main.h"
#include <stddef.h>
/**
 * _strstr - search for a substring in a string
 * @haystack: a pointer to the string we want to search from
 * @needle: a pointer to the substring we are searching
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int end_iner_loop = 1;
	int end_loop = 0;
	char *ptr;

	for (i = 0; haystack[i] != '\0' && end_loop == 0; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			end_iner_loop = 0;
			for (j = 0; needle[j] != '\0' && end_iner_loop == 0; j++)
			{
				if (haystack[k] == needle[j])
					k += 1;
				else
					end_iner_loop = 1;
			}
		}
		if (end_iner_loop == 0)
			end_loop = 1;
	}
	if (end_loop == 0)
		ptr = NULL;
	else
		ptr = haystack + i - 1;
	return (ptr);
}
