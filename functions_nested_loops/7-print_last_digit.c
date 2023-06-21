#include "main.h"
/**
 * Write a function that prints the last digit of a number.
 */
int print_last_digit(int number)
{
	if (number < 10)
	number = -number;
	return (number % 10);
}
