#include "main.h"
/**
 * print_numbers - check code 0 to 9
 * void: check code
 * Return: nothing returns
 */
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
