#include <stdio.h>

/**
 *main - this program print all the combination of single digit
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
if (n < 57)
{
putchar(',');
putchar(' ');
}
n += 1;
}

putchar('\n');
return (0);
}
