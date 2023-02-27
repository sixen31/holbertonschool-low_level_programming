#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string in place
 *@s: the string to reverse
 *
 * This function takes a string as an argument and reverses it in place by
 * swapping characters from the beginning and end of the string until the
 * entire string has been reversed.
 */
void rev_string(char *s)
{
int length = 0;
int i, j;
char temp;

while (*(s + length) != '\0')
{
length++;
}

for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = *(s + i);
*(s + i) = *(s + j);
*(s + j) = temp;
}
}
