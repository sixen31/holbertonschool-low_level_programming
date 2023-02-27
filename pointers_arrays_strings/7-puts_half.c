#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - Prints the second half of a null-terminated string.
 *
 *@str: Pointer to the null-terminated string to print.
 *
 * This function prints the second half of the string pointed to by @str,
 *
 * followed by a newline character. If the length of the string is even,
 *
 * the first character of the second half is the middle character.
 *
 * If the length is odd, the first character of the second half is the
 *
 * character immediately after the middle character.
 *
 * Return: void
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
