#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9, followed by a new line.
 * @void: check code
 * Return: nothing to be returned
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
