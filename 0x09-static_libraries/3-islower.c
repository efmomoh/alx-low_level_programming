#include "main.h"
/**
 *_islower - check the code if it has a lowercase char
 *@c: check for lowercase
 * Return: 1 if char is lowercase, else  return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

