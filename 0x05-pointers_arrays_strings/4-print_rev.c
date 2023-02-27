#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int i, num;

	num = 0;
	while (s[num] != '\0')
		num++;

	for (i = num - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
