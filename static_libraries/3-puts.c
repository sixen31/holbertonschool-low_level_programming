#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string to stdout, followed by a newline character
 *@str: the string to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
