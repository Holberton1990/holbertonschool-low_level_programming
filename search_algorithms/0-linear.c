#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * linear_search - Kërkon një vlerë në një varg të numrave të plotë
 * @array: Vargu ku kërkojmë
 * @size: Madhësia e vargut
 * @value: Vlera që kërkojmë
 *
 * Kërkon vlerën @value në vargun @array me madhësi @size duke përdorur
 * algoritmin e kërkimit lineare. Kthehet -1 nëse vlera nuk gjendet ose vargu
 * është NULL, ose kthen indeksin e vlerës në varg nëse gjendet.
 */
int linear_search(int *array, size_t size, int value) 
{
    size_t i;

    if (array == NULL) 
        return -1;

    for (i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) 
            return (int)i; 
    }

    return -1;
}

