/**
 * swap_int - this function swap the value contained in variable
 * @a: pointer containing the address of a variable
 * @b: pointer containing the address of a variable
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
