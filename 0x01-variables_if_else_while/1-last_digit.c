#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - This program determine the value of the last digit of a number.
*
*Return: Always 0 (success)
*/

int main(void)
{
int n;
int r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
if (r > 5)
printf("Last digit of %d is %d and is greater than %d\n", n, r, 5);
else if (r == 0)
printf("Last digit of %d is %d and is %d\n", n, r, 0);
else if (r < 6 && r != 0)
printf("Last digit of %d is %d and is less than %d and not %d \n", n, r, 6, 0);
return (0);
}
