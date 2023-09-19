#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low, high, i;

    if (array == NULL || size == 0)
    {
        return -1;
    }

    low = 0;
    high = size - 1;

    while (low <= high)
    {
        size_t mid = (low + high) / 2;

        printf("Searching in array: ");
        for (i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
            {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

