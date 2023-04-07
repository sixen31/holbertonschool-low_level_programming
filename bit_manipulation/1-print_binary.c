#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;
		len++;

	if (len == 0)
	{
		_putchar('0');
		return;
	}

	for (len--; len >= 0; len--)
	{
		if ((n & (mask << len)) == 0)
			_putchar('0');
		else
			_putchar('1');
	}
}
