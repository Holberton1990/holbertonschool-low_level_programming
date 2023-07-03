#include "main.h"
#include <stdio.h>
/**
 *_print_rev_recursion - function that prints a string reverse
 *@s: string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

