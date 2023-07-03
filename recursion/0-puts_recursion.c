#include <stdio.h>
/** function that prints a string
 */
void _puts_recursion(char *s)

if (str == NULL || *str == '\0')
        return;
    
    // Recursive case: combine the last character with the reversed substring
    reverse_string(str + 1);
    puts("%c", *str);
}

int main()
{
    char str[] = "Hello";
    
    reverse_string(str);
    printf("\n");
    
    return 0;
}

