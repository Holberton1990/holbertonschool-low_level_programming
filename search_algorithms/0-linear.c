#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: The array to search in
 * @size: The size of the array
 * @value: The value to find
 *
 * Searches for @value in the @array using the linear search algorithm.
 * Returns the index of the value if found, or -1 if it's not present in the array
 * or if the array is NULL. Prints each checked value during the search.
 *
 * Return: If the value is found, returns the index; otherwise, returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i; // Change the data type of i to size_t

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

