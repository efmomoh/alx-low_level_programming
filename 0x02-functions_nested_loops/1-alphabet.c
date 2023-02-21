#include "main.h"
/**
 * main - print a program  that prints the alphabet, in lowercase,
 * followed by a new line
 * Return: 0 always
 */

void print_alphabet(void);
{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
		_putchar(sl);
	_putchar('\n');

	return (0);
}
