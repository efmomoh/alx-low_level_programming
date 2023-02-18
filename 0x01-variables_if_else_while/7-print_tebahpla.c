#include <stdio.h>
/**
 * main - a program that prints lwer case aplphabet in reverse order
 * Retur: 0 (success)
 */
int main(void)
{
	char lcl;

	for (lcl = 'z'; lcl >= 'a'; lcl--)
		putchar(lcl);

	putchar('\n');

	return (0);
}
