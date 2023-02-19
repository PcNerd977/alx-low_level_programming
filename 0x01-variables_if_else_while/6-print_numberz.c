#include <stdio.h>

/**
*main - using ASCII format to print a number
*
*Return: Always 0 (success)
*/

int main(void)
{
int n;
n = 48;
while (n < 58)
{
putchar(n);
n += 1;
}
putchar('\n');
return (0);
}
