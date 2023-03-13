#include "main.h"
#include <stdlib.h>
/**
 * str_concat - allocate a memory space to concatinate two strings
 * @s1: a character pointer to the first string
 * @s2: a character pointer to the second string
 * Return: a character pointer to the allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *ptr;
	int lenght_s1 = 0;
	int lenght_s2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		lenght_s1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		lenght_s2 += 1;
	ptr = (char *)malloc(lenght_s1 + lenght_s2 + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lenght_s1; i++)
		ptr[i] = s1[i];
	for (i = 0; i <  lenght_s2; i++)
		ptr[lenght_s1 + i] = s2[i];
	ptr[lenght_s1 + lenght_s2] = '\0';
	return (ptr);
}
