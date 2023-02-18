#include <stdio.h>
/**
 *  main - A C program that prints an alphabet both lower and upper cases
 * Return: 0 (success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
