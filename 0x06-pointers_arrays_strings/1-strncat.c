#include "main.h"
/**
 * _strncat -eck code and concatenates two strings
 * @src: The source of strings to be checked
 * @dest: The destination of the string to check
 * @n: The length of int to be checked
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
