#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
int i, j, k, l;
for (i = 0; i < 10; i++)
for (j = i + 1; j < 10; j++)
for (k = j + 1; k < 10; k++)
for (l = k + 1; l < 10; l++)
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
putchar(',');
putchar(' ');
putchar(k + '0');
putchar(',');
putchar(' ');
putchar(l + '0');
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
