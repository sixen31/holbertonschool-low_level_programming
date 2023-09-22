#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located
 *         If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: Pointer to the first element of the array to print
 * @left: Starting index of the array to print
 * @right: Ending index of the array to print
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");

	for (i = left; i < right; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}
