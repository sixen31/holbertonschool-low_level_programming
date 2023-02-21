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
int var;
for (var = 0; var < 10; var++)
putchar(var + '0');
for (var = 0; var < 6; var++)
putchar(var + 'a');
putchar('\n');
return (0);
}
