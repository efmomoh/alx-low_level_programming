#include "main.h"

/**
 * largest_number - check code that returns the largest of 3 numbers
 * @a: check first number
 * @b: check second number
 * @c: check third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
	largest = a;
	}
	else if (b > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}
