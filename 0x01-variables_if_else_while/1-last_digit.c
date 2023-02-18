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
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m  = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is equal to zero\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than six not zero\n", n, m);
	}
	return (0);
}
