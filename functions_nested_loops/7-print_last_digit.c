#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number
 *
 * @n: nprint_last_digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
n = (n % 10);
_putchar(n);
if (n > 0)
{
_putchar(48 + n);
return (n);
}
else
{
_putchar(48 - n);
return (-n);
}
return (n);
}
