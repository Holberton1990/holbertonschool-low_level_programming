#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 *linear_search - function that searches for a value in an array of integers
 *@array: array to be searched
 *@size: size of the array
 *@value: value to find
 *Return: -1 if its not present or array is NULL or the index of the value
 *if found
 */

int linear_search(int *array, size_t size, int value) 
{	
	int i;

    	if (array == NULL) {
        return -1;
    
    for (size_t i = 0; i < size; i++) 
    {
        printf("Value checked array[%lu] = %d\n", i, array[i]);
        if (array[i] == value) {
            return i; 
        }
    }
    return -1;
}

