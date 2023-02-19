#include <stdio.h>

/**
*main - print all alphabet in lower case except e and q
*
*Return: Always 0 (success)
*/

int main(void)
{
int n;
for (n = 97; n <= 122; n++)
if (n != 'q' && n != 'e')
putchar(n);
putchar('\n');
return (0);
}
