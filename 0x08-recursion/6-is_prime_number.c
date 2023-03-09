#include "main.h"
/**
 * check - check for code to see if number is prime or not
 * @a:check the integer
 * @b:check the integer
 * Return: the integer
 */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
 * is_prime_number - check the code that states if number is prime
 * @n:c check the integer
 * Return: check the integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
