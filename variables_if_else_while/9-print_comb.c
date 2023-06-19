#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j, k;

for (i = 0 ; i <= 9; i++)
putchar(i + '0');
putchar(',');
putchar(' ');
for (j = i + 1 ; j <= 9; j++)
putchar(j + '0');
putchar(',');
putchar(' ');
for (k = j + 1 ; k <= 9; k++)
putchar(k + '0');
putchar(',');
putchar(' ');

putchar('\n');

return (0);
}
