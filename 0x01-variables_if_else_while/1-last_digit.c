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

srand(time(0));
n = rand() - RAND_MAX / 2;
int last_dig = n % 10;
if (last_dig > 5)
printf("Last digit of %d is %d and is greater than %d\n", n, last_dig, 5);
else if (last_dig == 0)
printf("Last digit of %d is %d and is %d\n", n, last_dig, 0);
else if (last_dig < 6 && last_dig != 0)
printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, last_dig);
return (0);
}
