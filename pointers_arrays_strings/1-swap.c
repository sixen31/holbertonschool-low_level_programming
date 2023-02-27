#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 *
 * This function swaps the values of the integers pointed to by a and b.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * @return None.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
