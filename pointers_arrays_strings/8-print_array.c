#include "main.h"
#include <stdio.h>
/**
 * Prints the first n elements of an array of integers, separated by commas.
 *
 *@param a Pointer to the array of integers to print.
 *@param n The number of elements in the array to print.
 * 
 * The integers are printed in the order they appear in the array, with each 
 * integer separated by a comma and a space. The function does not print a 
 * newline character at the end.
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
