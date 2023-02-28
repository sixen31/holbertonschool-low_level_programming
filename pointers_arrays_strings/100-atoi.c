#include <limits.h>
#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * This function swaps the values of the integers pointed to by a and b.
 *
 *@param a : Pointer to the first integer.
 *@param b : Pointer to the second integer.
 *
 *@return None.
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;
int i = 0;
if (s[i] == '-')
{
sign = -1;
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
int digit = s[i] - '0';
if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit > 8))
num = num * 10 - digit;
}
else
i++;
}

return (sign *num);
}
