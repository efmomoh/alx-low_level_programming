#include "main.h"
/**
 * puts2 - check and prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 (success)
 */
void puts2(char *str)
{
	int st;

	for (st = 0; str[st] != '\0'; st++)
	if (st % 2 == 0)
		_putchar(str[st]);
	_putchar('\n');
}
