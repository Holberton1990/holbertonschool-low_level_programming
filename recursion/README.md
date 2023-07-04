# C - Recursion
Recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller subproblems. In the context of C programming, recursion involves a function invoking itself within its own definition.

To implement recursion in C, you need to follow these steps:

#### Define the base case: 
Identify the simplest form of the problem that can be directly solved without further recursion. The base case acts as a stopping condition for the recursive function.

#### Define the recursive case: Define the logic for the recursive case, where the function calls itself with a smaller input to solve a subproblem, making progress towards the base case.

#### Handle the termination condition: 
Ensure that the recursive function terminates by reaching the base case. Without a proper termination condition, the recursion can result in infinite loops or stack overflow errors.

#### Here's an example of a recursive function in C that calculates the factorial of a number:
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 5;
    int result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);
    return 0;
}
In this example, the factorial function calls itself with a smaller value (n - 1) until it reaches the base case where n == 0. The result is calculated by multiplying n with the factorial of (n - 1).

Situations where you should consider using recursion in C:

When the problem can be divided into smaller, identical subproblems.
When the solution can be easily expressed in terms of smaller solutions of the same problem.
When recursion leads to a more elegant and readable solution compared to iterative approaches.
Situations where you should avoid using recursion in C:

When the problem can be solved efficiently using iterative approaches or simple loops.
When recursion would lead to excessive memory usage due to a large number of function calls on the call stack.
When the base case is difficult to define, or the recursion depth is expected to be too deep, which may result in stack overflow errors.
In C, recursive functions can be powerful tools for solving certain problems, but they require careful design and consideration to avoid potential issues such as stack overflow and excessive memory usage.
## Tasks
#### 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget
#### 1. Why is it so important to dream? Because, in my dreams we are together
#### 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange
#### 3. You mustn't be afraid to dream a little bigger, darling
#### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
#### 5. Your subconscious is looking for the dreamer
#### 6. Inception. Is it possible?
[C - Recursion](https://intranet.hbtn.io/projects/2158)
