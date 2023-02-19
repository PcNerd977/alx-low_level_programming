#include <stdio.h>

/**
*main - print all alphabets in lower case in reverse order
*
*Return: Always 0 (success)
*/

int main(void)
{
int n;
n = 122;
while (n >= 97)
{
putchar(n);
n -= 1;
}
putchar('\n');
return (0);
}
