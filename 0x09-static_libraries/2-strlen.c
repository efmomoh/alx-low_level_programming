#include "main.h"
/**
 * _strlen - check code and return the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 (success)
 */
int _strlen(char *s)
{
	int str = 0;

	for (; *s++;)
		str++;
	return (str);
}
