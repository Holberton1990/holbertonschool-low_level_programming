# C - Functions, nested loops
Nested loops: Nested loops are loops within loops. They allow you to repeat a set of instructions multiple times in a hierarchical manner. Each iteration of the outer loop triggers the complete iteration of the inner loop. You can nest loops to handle multidimensional data structures, perform matrix operations, or traverse complex data.

#### Example of nested loops:

c
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
        printf("(%d, %d)\n", i, j);
    }
}
#### Function: 
A function is a block of code that performs a specific task. It encapsulates a series of instructions, can accept input parameters, and can return a value. Functions provide modularity and allow you to break down complex problems into smaller, manageable tasks. They promote code reusability and improve program organization.

Example of a function declaration and definition:

c

// Declaration
int addNumbers(int a, int b);

// Definition
int addNumbers(int a, int b) {
    return a + b;
}
Example of calling a function:

#### Difference between declaration and definition of a function:
 The declaration of a function specifies its name, return type, and parameter types. It tells the compiler about the existence and signature of the function. The definition of a function includes the implementation of the function, providing the actual code that is executed when the function is called.

#### Prototype: 
A function prototype is a declaration of a function that provides information about its name, return type, and parameter types. It is typically placed at the beginning of a source file or in a header file. Function prototypes enable the compiler to verify the correct usage of functions before their actual implementation.

#### Example of a function prototype:

int addNumbers(int a, int b);
Scope of variables: The scope of a variable refers to the region of the program where the variable is visible and can be accessed. In C, variables can have different scopes:

#### Global scope: 
Variables declared outside of any function have global scope and can be accessed throughout the entire program.
Local scope: Variables declared within a function have local scope and can only be accessed within that function. They are typically created when the function is called and destroyed when the function returns.
Block scope: Variables declared within a block of code (e.g., within a loop or an if statement) have block scope and can only be accessed within that block.
#### gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89: These flags are used with the gcc compiler to enable additional warnings and enforce stricter code standards during compilation.

-Wall: Enables a set of warning messages for potential code issues.
-Werror: Treats warnings as errors, causing the compilation to fail if any warnings are present.
-pedantic: Ensures strict adherence to the C language standard.
-Wextra: Enables additional warning messages beyond those enabled by -Wall.
-std=gnu89: Sets the C language standard to use (GNU C89/C90 in this case).
Header files: Header files contain function prototypes, macro definitions, and type definitions that are shared across multiple source files. They provide the necessary information to the compiler for correct function usage and enable modular programming. Header files are included using the #include preprocessor directive.

#### Example of using a header file:

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
In the example above, the <stdio.h> header file is included to access the printf function prototype.

# Tasks
## 0. _putchar
## 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
## 2. 10 x alphabet
## 3. islower
## 4. isalpha
## 5. Sign
## 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
## 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
## 8. I'm federal agent Jack Bauer, and today is the longest day of my life
## 9. Learn your times table
## 10. a + b
## 11. 98 Battery Street, the OG

[C - Functions, nested loops](https://intranet.hbtn.io/projects/2153)


