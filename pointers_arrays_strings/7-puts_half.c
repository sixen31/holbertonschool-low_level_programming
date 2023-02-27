#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *
 *  puts_half - Prints the second half of a string followed by a new line.
 *
 *@str: Pointer to a null-terminated string.
 */
void puts_half(char *str)
{
int length = strlen(str);
int start_index;

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}

printf("%s\n", str + start_index);
}
