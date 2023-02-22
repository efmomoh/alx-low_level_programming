#include "main.h"
/**
 * print_sign - print the num sign
 * @n: check the value of n
 * Return: 1, 0 and -1 if the code is +, 0 and -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
