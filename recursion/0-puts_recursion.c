#include<stdio.h>
/**function that prints a string
 * followed by a new line
 * */
 void _puts_recursion(char *s)

	 if (*s == '\0')
{

	 printf("\n");
	 return;
}
        printf("%c", *s);
	_puts_recursion(s+1);
	}
