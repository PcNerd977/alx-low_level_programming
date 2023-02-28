#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char *str;
	char s[20] = "My School";

	//str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	
	return (0);
}
