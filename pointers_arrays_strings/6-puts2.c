#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i += 2;
}

putchar('\n');
}
