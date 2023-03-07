#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - check the function that searches a string
 * for any of a set of bytes
 * @s:check the first occurrence in the string
 * @accept: check the matches one of the bytes, 0r
 * @NULL if no such byte
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
