#include "main.h"
#include <string.h>
/**
 *puts_half - function that prints half of a string
 *@str: string
 */
char *leet(char *str)
{	int i;

	for (int i = 0; str[i] != '\0'; i++;)
	{
		if 
			
















	if (strlen(str) % 2 == 0)
		i = (strlen(str) / 2);
	else
		i = ((strlen(str) - 1) / 2) + 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}

