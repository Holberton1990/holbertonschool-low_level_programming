#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_digit = n % 10;

	if (last_digit > 5)
	printf("Last_digit of %d is %d and is greater than 5\n", n, last_digit);
	if (last_digit == 0)
	printf("Last_digit of %d is 0 and is 0\n", n, last_digit);
	if (last_digit < 6 && != 0)
	printf("Last_digit of %d is %d and is less than 6 and not 0\n", n, last_digit);

	return (0);

