#include "main.h"
/**
 *print_last_digit - print the last digit of int
 *@int: chek for the last digit of an int
 *Return: last digit value
 */
int print_last_digit(int)
{
	int last_digit = int % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
