#include <stdio.h>
/**
 * main - a program that prints a single digit in base 10
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
