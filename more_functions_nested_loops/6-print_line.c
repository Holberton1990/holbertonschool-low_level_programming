#include <unistd.h>
#include "main.h"

/**
 * print_line - main function
 * @n: parameter
 * Return: 1 if uppercase and 0 if false
 */

void print_line(int n)
{
        int i j;

        for (i = 0, i < n, i++)
        {
                for (j = 0, j < n, j++)
                {
                        if(j==i)
                                _putchar('_')
                        else
                                _putchar(' ')
                }
        }
        _putchar('\n');
}
