#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * This function takes a string as an argument and prints
 * order. The string is passed in using the `@s` parameter.
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (*(s + length) != '\0')
{
length++;
}

for (i = length - 1; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
