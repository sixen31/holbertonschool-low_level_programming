#include "main.h"
/**
 * Swaps the values of two integers using pointers.
 *
 *@param a: a pointer to the first integer to be swapped.
 *@param b: a pointer to the second integer to be swapped.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
