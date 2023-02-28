#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the elements of an array of integers
 * @a: pointer to the array
 * @n: the number of elements in the array
 *
 * Description: This function prints each element of the array
 * on a separate line, followed by a newline character.
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
