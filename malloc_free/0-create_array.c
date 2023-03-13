#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *      initializes it with a specific char
 *
 *@size: the size of the array to create
 *@c: the character to initialize the array with
 *
 * Return: On success, a pointer to the newly created array.
 *         On failure, 0.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (0);

arr = malloc(sizeof(char) * size);

if (arr == 0)
return (0);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
