#include "main.h"
/**
 * _isdigit - Checks whether the character is a decimal digit
 * @c: The character to check
 *
 * Return: 1 if c is a decimal digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
