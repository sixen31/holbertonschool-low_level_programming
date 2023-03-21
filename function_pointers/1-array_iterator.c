#include "function_pointer.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int));
{
        {
    unsigned int i;

    if (array != NULL && action != NULL)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

