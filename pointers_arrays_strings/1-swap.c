#include "main.h"
/**
 * @brief Swaps the values of two integers.
 *
 * This function swaps the values of the integers pointed to by a and b.
 *
 * @param[in,out] a Pointer to the first integer.
 * @param[in,out] b Pointer to the second integer.
 *
 * @return None.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
