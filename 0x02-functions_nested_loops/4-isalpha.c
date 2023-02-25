#include "main.h"
/**
 * _isalpha - check alphabet char upper or lower case
 * @c: check if it is upper or lower char
 * Return: 1 if it is lower char or upper char, else return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
