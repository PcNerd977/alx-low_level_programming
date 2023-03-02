#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	    char s1[] = "Habeeb";
    char s2[] = "Olawale";

    printf("The return value when i use the actual function is: %d, %d and %d\n", strcmp(s1, s2), strcmp(s2, s1), strcmp(s1,s1));
   printf("%d\n", _strcmp(s1, s2));
   printf("%d\n", _strcmp(s2, s1));
   printf("%d\n", _strcmp(s1, s1));
return (0);}
