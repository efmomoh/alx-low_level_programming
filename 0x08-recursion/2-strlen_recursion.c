#include "main.h"
/**
 * _strlen_recursion - check the length of a string
 * @s: check the string
 * Return:the integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
