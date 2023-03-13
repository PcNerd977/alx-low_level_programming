#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array with a character in it
 * @size: the size of the array
 * @c: a character you want to initialize the array with
 * Return: a pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size);

	if (size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
