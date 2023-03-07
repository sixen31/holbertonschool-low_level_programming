#include "main.h"

/**
 * _find_sqrt - finds the natural square root of a number
 * @n: the number to find the square root of
 * @start: the start of the search range
 * @end: the end of the search range
 *
 * Return: the square root of n, or -1 if it doesn't have one
 */
int _find_sqrt(int n, int start, int end)
{
int mid;

if (start <= end)
{
mid = (start + end) / 2;
if (mid *mid == n)
return (mid);
else if (mid *mid < n)
return (_find_sqrt(n, mid + 1, end));
else
return (_find_sqrt(n, start, mid - 1));
}
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if it doesn't have one
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_find_sqrt(n, 1, n));
}
