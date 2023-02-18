#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - A program that prints the function of the last digit
 *  number in variable
 *  Return: 0 (success)
 *
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = (n % 10);
	if (last_digit > 5)
		printf("the last digit of %d is %d
		and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("the last digit of %d is %d
		and is equal to zero\n", n, last_digit);
	else if (last_digit < 6)
		printf("the last digit of %d is %d
		and is less than six not zero\n", n, last_digit);
	return (0);
}
