#include "main.h"
/**
 * swap_int - main function
 * swaps the values of two integers.
 * @b: second param
 */

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


