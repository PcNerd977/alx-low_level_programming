#include <stdio.h>

/**
*main - print all the digit that form base 16
*
*Return: Always 0 (success)
*/

int main(void)
{
int n;
for (n = 48; n <= 102; n++)
{
if (n > 57 && n < 97)
;
else
putchar(n);
}
putchar('\n');
return (0);
}
