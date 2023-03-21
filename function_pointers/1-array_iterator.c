#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - execute a function on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)

		for (i = 0; i < size; i++)

			action(array[i]);

}

