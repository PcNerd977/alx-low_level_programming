#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "The journey of a thousand sleepless nights start with printf(hello world)";
    char *f = "sleepp";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
