#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 * @s: string to convert
 *
 * Return: converted integer or 0 if no number is found
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int started = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
started = 1;
num = num * 10 + (*s - '0');
}
else if (started)
break;
s++;
}

return (num *sign);
}
