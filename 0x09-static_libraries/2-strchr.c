#include "main.h"
#include <stddef.h>
/**
 * _strchr - check code that locates a character in a string
 * @c: check the occurrence of the character
 * @s: check in the string
 * Return: null a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
