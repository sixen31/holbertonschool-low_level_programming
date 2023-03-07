#include <stdio.h>
#include "main.h"

int check_prime(int n, int start);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
return (0);
return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime by dividing it by all numbers
 *               from start to n / 2
 * @n: the number to check
 * @start: the number to start checking from
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int start)
{
if (n % start == 0)
return (0);
if (start == n / 2)
return (1);
return (check_prime(n, start + 1));
}
