#include "main.h"
/**
 * puts_half -eck and print half of a string
 * @str: char to check
 *
 * Return: 0 always is a success
 */
void puts_half(char *str)
{
	int st = 0, num;

	while (str[st] != '\0')
		st++;
	if (st + 1 % 2 != '0')
		num = (st - 1) / 2;
	else
		num = (st / 2);
	num++;

	for (st = num; str[st] != '\0'; st++)
	_putchar(str[st]);
	_putchar('\n');
}
