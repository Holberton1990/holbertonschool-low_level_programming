#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1; // Kthe -1 nëse array është NULL
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = %d\n", i, array[i]);
        if (array[i] == value) {
            return i; // Kthe indeksin nëse vlera është gjetur
        }
    }

    return -1; // Kthe -1 nëse vlera nuk është gjetur në array
}

