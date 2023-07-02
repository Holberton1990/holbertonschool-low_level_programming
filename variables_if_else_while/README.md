# C - Variables, if, else, while

Arithmetic operators: Arithmetic operators perform mathematical operations on operands. In C, the arithmetic operators are:

#### Addition: +
#### Subtraction: -
#### Multiplication: *
#### Division: /
#### Modulo (remainder): %
####  Increment: ++
#### Decrement: --
Logical operators: Logical operators operate on boolean values (true or false) and produce a boolean result. In C, the logical operators are:

#### Logical AND: &&
#### Logical OR: ||
#### Logical NOT: !C - Variables, if, else, while
Relational operators: Relational operators compare the values of two operands and return a boolean result. In C, the relational operators are:

#### Equal to: ==
#### Not equal to: !=
#### Greater than: >
#### Less than: <
#### Greater than or equal to: >=
#### Less than or equal to: <=
TRUE and FALSE values in C: In C, the value 0 is considered FALSE, and any non-zero value is considered TRUE.

Boolean operators: Boolean operators combine boolean values or expressions and produce a boolean result. In C, the boolean operators are the logical operators (&&, ||, !).

if and if...else statements: The if statement is used to perform conditional execution. It allows you to execute a block of code if a certain condition is true. The if...else statement extends the if statement by providing an alternative block of code to execute when the condition is false.

Comments: Comments in C are used to add explanatory notes or disable certain parts of the code. There are two types of comments:

Single-line comment: Starts with // and comments everything until the end of the line.
Multi-line comment: Starts with /* and ends with */. It can span multiple lines.
Variable declaration: To declare variables of types char, int, and unsigned int, you can use the following syntax:

arduino
#### Copy code
char myChar;
int myInt;
unsigned int myUnsignedInt;
Assigning values to variables: To assign a value to a variable, you can use the assignment operator (=). For example:

makefile
#### myChar = 'A';
#### myInt = 42;
#### myUnsignedInt = 100;
Printing variables with printf: To print variables of type char, int, and unsigned int, you can use the printf function with appropriate format specifiers. For example:

#### perl
printf("Character: %c\n", myChar);
printf("Integer: %d\n", myInt);
printf("Unsigned Integer: %u\n", myUnsignedInt);
While loop: The while loop is used to repeatedly execute a block of code as long as a specified condition is true.

Using variables with while loop: You can use variables in the condition of the while loop. For example:

arduino
while (count < 10) {
    // Code to be executed
    count++;
}
Printing variables using printf: You can print the values of variables inside the while loop using printf.

#### ASCII character set: 
ASCII (American Standard Code for Information Interchange) is a character encoding scheme that assigns numerical values to a set of characters. It includes standard characters, control characters, digits, and special symbols.

gcc flags -m32 and -m64: These flags are used with the gcc compiler to specify the target architecture. -m32 is used to compile for a 32-bit system, while -m64 is used to compile for a 64-bit system. These flags influence the size and behavior of the compiled code, ensuring compatibility with the target architecture.

# Tasks
## 0. Positive anything is better than negative nothing
## 1. The last digit
## 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
## 3. alphABET
## 4. When I was having that alphabet soup, I never thought that it would pay off
## 5. Numbers
## 6. Numberz
## 7. Smile in the mirror
## 8. Hexadecimal
## 9. Patience, persistence and perspiration make an unbeatable combination for success

[C - Variables, if, else, while](https://intranet.hbtn.io/projects/2152)
