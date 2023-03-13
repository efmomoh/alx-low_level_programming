#include "main.h"

/**
 * _strcat - check code and concat two strings
 * @dest:char to check
 * @src:char to check
 * Return:char variable
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
