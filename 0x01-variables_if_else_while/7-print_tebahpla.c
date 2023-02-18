#include <stdio.h>
/**
 * main - A C program that prints lower case alphabets in reverse order
 * Return: 0 (success)
 */
int main(void)
{
	char lcl;

	for (lcl = 'z'; lcl >= 'a'; lcl--)
		putchar(lcl);

	putchar('\n');

	return (0);
}
