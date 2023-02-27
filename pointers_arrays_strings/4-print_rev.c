#include "main.h"
#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 *
 * This function takes a string as an argument and reverses it in place by
 * swapping characters from the beginning and end of the string until the
 * entire string has been reversed.
 */
void rev_string(char *s)
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
