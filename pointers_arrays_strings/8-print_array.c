#include "main.h"
#include <stdio.h>
/**
 * Prints the first n elements of an array of integers, separated by commas.
 *
 *@param a The array to print.
 *@param n The number of elements to print.
 */
void print_array(int *a, int n)
{
int i;
if (n <= 0)
{
printf("\n");
return;
}
printf("%d", a[0]);
for (i = 1; i < n; i++)
{
printf(", %d", a[i]);
}
printf("\n");
}
