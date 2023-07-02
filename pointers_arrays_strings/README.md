# C - Pointers, arrays and strings
Pointers in C are variables that store memory addresses. They allow you to indirectly access and manipulate data stored in memory. Pointers are declared using the * symbol and can be used to allocate memory dynamically, pass values by reference, and work with complex data structures.

Here's an overview of how pointers work and how to use them:

Declaring and Initializing 
### Pointers:

int *ptr;         // Declare a pointer to an integer
int num = 10;
ptr = &num;       // Assign the memory address of 'num' to 'ptr'
Dereferencing Pointers:
Dereferencing a pointer means accessing the value stored at the memory address it points to. It is done using the * operator.

printf("Value of num: %d\n", *ptr);  // Output: Value of num: 10
### Arrays: Arrays in C are a contiguous block of memory that can store multiple elements of the same type. Arrays are declared using square brackets [] and can be accessed using index notation.

int numbers[5];     // Declare an array of 5 integers
numbers[0] = 10;
numbers[1] = 20;
Differences between Pointers and Arrays:

Pointers store memory addresses, whereas arrays store a sequence of elements of the same type.
Pointers can be reassigned to different addresses, while arrays have a fixed size and cannot be directly reassigned.
Pointer arithmetic allows you to perform arithmetic operations on pointers, while array indices represent offsets from the base address.
Pointers can be used to dynamically allocate memory using functions like malloc, whereas arrays have a static size determined at compile-time.
### Strings:
In C, strings are represented as arrays of characters terminated by a null character \0. Strings can be declared as character arrays or as pointers to characters.

char str1[] = "Hello";        // Declaring a string as a character array
char *str2 = "World";         // Declaring a string as a pointer
Various string manipulation functions like strcpy, strlen, strcat, etc., are available in the C standard library to work with strings.

### Scope of Variables:
The scope of a variable determines where in a program it can be accessed. In C, variables can have block scope, function scope, or file scope.

Block scope: Variables declared within a block, such as within a function or a loop, have block scope. They are accessible only within that block.
Function scope: Variables declared within a function have function scope. They are accessible within that function.
File scope: Variables declared outside of any function have file scope. They are accessible throughout the file in which they are defined.
Additionally, C provides mechanisms like global variables and static variables to control the visibility and scope of variables in different contexts.
## Tasks
 0-98
.1-memcpy.c.swp

.6-puts2.c.swp

.7-leet.c.swp
0-main.c

0-reset_to_98.c

0-memset.c

0-reset_to_98.c

0-reset_to_98.c

0-strcat.c

1-main.c

1-memcpy.c

1-strncat.c

1-swap

1-swap.c

100-atoi

100-atoi.c

100-main.c

2-main.c

2-strchr.c

2-strlen.c

2-strncpy

2-strncpy.c

3-main.c

3-puts.c

3-strcmp.c

3-strspn.c

4-main.c

4-print_rev.c

4-rev_array.c

4-strpbrk.c

5-main.c

5-rev_string.c

5-strstr.c

4 days ago
6-cap_string.c

6-main.c

6-puts2

6-puts2.c
7-leet.c
7-main.c
7-print_chessboard.c
7-puts_half.c
8-main.c
8-print_array.c
8-print_diagsums.c
9-main.c
9-strcpy.c
_putchar.c
main.c
main.h

[C - Pointers, arrays and strings](https://intranet.hbtn.io/projects/2155)
