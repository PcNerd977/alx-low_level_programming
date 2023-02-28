#include "main.h"
/**
 * rev_string - reverse the string contained in an array
 * @s: a pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	int lenght = 0;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		lenght += 1;

	for (j = 0; j < (lenght / 2); j++)
	{
		tmp = s[j];
		s[j] = s[lenght - 1 - j];
		s[lenght - 1 - j] = tmp;
	}
}
