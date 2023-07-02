# C - More functions, more nested loops
## Nested Loops: 
Nested loops in C are loops that are defined inside the body of another loop. This allows for the repeated execution of a set of statements within the context of the outer loop. Nested loops are useful when you need to perform iterative tasks that require multiple levels of iteration.

Here's an example of using nested loops to print a pattern:

#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
In this example, the outer loop iterates over the rows, while the inner loop iterates over the columns. This results in a pattern of asterisks printed in a grid-like structure.

## Function: 
In C, a function is a block of code that performs a specific task. Functions provide modularity and allow you to organize code into reusable components. A function consists of a function signature (declaration or definition), a function body, and optionally, a return statement.

## Function Declaration: 
A function declaration informs the compiler about the existence and prototype (parameter types and return type) of a function without providing its implementation. Function declarations are typically placed in header files or at the beginning of a source file.

## Function Definition: 
A function definition includes the implementation of the function. It contains the function body, which is a set of statements that are executed when the function is called.

Here's an example of declaring and defining a function:

#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main() {
    int num1 = 5;
    int num2 = 10;
    int sum = addNumbers(num1, num2);
    printf("Sum: %d\n", sum);

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
## Prototype: 
A function prototype is a declaration that provides information about a function's name, parameter types, and return type. It is typically placed before the main function or in a header file. Prototypes allow the compiler to verify the correct usage of functions before their actual implementation.

## Scope of Variables: 
The scope of a variable in C defines its visibility and accessibility within a program. There are three main scopes of variables:

## Block Scope: 
Variables declared inside a block, such as within a function or a loop, have block scope. They are only accessible within the block where they are defined. Variables with block scope are typically local variables.
Function Scope: Variables declared within a function have function scope. They are accessible within that function and can be used by any block within the function. Function scope variables are typically local variables.
## File Scope: 
Variables declared outside of any function have file scope. They are accessible throughout the file where they are defined. File scope variables are typically global variables.
## GCC Flags: 
GCC (GNU Compiler Collection) is a widely used compiler for the C programming language. The flags mentioned (-Wall, -Werror, -pedantic, -Wextra, -std=gnu89) are command-line options provided by GCC to modify the compilation process:

-Wall: Enables warnings for common programming mistakes.
-Werror: Treats warnings as errors, causing the compilation to fail if any warnings are encountered.
-pedantic: Enforces strict adherence to the C standard.
-Wextra: Enables additional warnings beyond those enabled by -Wall.
-std=gnu89: Specifies the C language standard to be used. In this case, it is set to GNU C89, which is an extension of the ANSI C89 standard.
Header Files: Header files in C contain declarations of functions, types, and macros that are used in multiple source files. They provide a way to separate the interface (declarations) from the implementation (definitions) of functions and allow for modular and reusable code.

To use a header file, you include it in your source file using the #include directive. The syntax is:

#include <header_file_name.h>
or

#include "header_file_name.h"
The former is used for system-provided header files, while the latter is used for user-defined header files.

Including a header file allows your source file to access the declarations and definitions defined in the header. This ensures that the compiler has the necessary information to properly compile and link your code.

# Tasks
.0-isupper.c.swo
.0-isupper.c.swp
0-isuper.c
1-isdigit.c
0-isupper.c
0-main.c
1-isdigit.c
1-main.c
1-isdigit.c
10-print_triangle.c
2-main.c
2-mul.c
3-main.c
3-print_numbers.c
4-main.c
4-print_most_numbers.c
4-print_most_numbers.c
5-main.c
5-more_numbers.c
6-main.c
6-print_line.c
6-print_line.c
7-main.c
7-print_diagonal.c
8-main.c
8-print_square.c
9-fizz_buzz.c
0. isupper
_putchar
0. isupper
_putchar.c
main.c
0. isupper
main.h

[C - More functions, more nested loops](https://intranet.hbtn.io/projects/2154)
