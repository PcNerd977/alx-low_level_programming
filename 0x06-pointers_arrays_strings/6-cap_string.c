#include "main.h"
/**
 * cap_string - capitalize all the character
 * @str: a pointer to the string we want to capitalize
 * Return: a pointer
 */
char *cap_string(char *str)
{
	int a;
	int lenght_str = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		lenght_str += 1;
		for (i = 1; i < lenght_str; i++)
	{
		if (str[i] == ' ' || '	' || ',' || '.' || '?' || ';' || '!' || '"' || '(' || ')' || '{' || '}')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
		return (str);

}
