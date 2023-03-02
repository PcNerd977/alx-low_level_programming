#include "main.h"
/**
 * string_toupper - change all the lower case to upper case
 * @str: a pointer to the string we want to change
 * Return: a pointer
 */
char *string_toupper(char *str)
{
	int i;
	int lenght_str = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght_str += 1;
	}

	for (i = 0; i < lenght_str - 1; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
