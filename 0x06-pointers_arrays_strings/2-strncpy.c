#include "main.h"
/**
 *_strncpy - check function that copies a string
 * @src: check the source of the strings
 * @dest: check the destination of the string
 * @n: check the length of the int
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
