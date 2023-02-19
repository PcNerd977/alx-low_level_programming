#include <stdio.h>
/**
*main - This program print  all the digit of number base 10
*
*Return: Always 0 (success)
*/

int main(void)
{
int n;
n = 0;
while (n < 10)
{
printf("%d", n);
n += 1;
}
putchar('\n');
return (0);
}
