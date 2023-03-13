#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - allocate a space to copy a string
 * @str: a character pointer that contain the string
 * Return: a character pointer to the copied string
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int lenght = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		lenght += 1;
	ptr = (char *)malloc(lenght + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lenght; i++)
		ptr[i] = str[i];
	ptr[lenght] = '\0';
	return (ptr);
}
