#include "main.h"
/**
 *print_last_digit - print the last digit of int
 *@n: chek for the last digit of an int
 *Return: ld (last digit value)
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
