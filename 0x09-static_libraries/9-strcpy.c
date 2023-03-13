#include "main.h"
/**
 * _strcpy -eck the code and copy the string
 * pointed to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 is always a success
 */
char *_strcpy(char *dest, char *src)
{
	int m;

	for (m = 0; src[m] != '\0'; m++)
		dest[m] = src[m];
	dest[m] = '\0';
	return (dest);
}
