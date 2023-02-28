/**
 * _strlen - retun the lenght of a string
 * @s: a pointer
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght;
	int i;

	lenght = 0;
	i = 0;
	while (s[i] != '\0')
	{
		lenght += 1;
		i++;
	}
	return (lenght);
}
