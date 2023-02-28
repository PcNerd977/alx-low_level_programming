#include "main.h"
/**
 * _strcpy - copy the string of src into dest
 * @dest: a pointer
 * @src: a pointer
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int lenght = 0;

	for (i = 0; src[i] != '\0'; i++)
		lenght += 1;
	for (i = 0; i <= lenght; i++)
		dest[i] = src[i];
	return (dest);
}
