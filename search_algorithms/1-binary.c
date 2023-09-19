#include "search_algos.h"
#include <stdio.h>

/*
 *
 */
int binary_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    size_t low = 0;
    size_t high = size - 1;
    size_t i; 

    while (low <= high) {
        size_t mid = (low + high) / 2;

        printf("Searching in array[%zu:%zu] = {", low, high); 
        for (i = low; i <= high; i++) {
            printf("%d", array[i]);
            if (i < high) {
                printf(", ");
            }
        }
        printf("}\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

