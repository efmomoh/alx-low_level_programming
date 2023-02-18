#include <stdio.h>
/**
 * main - A C program that prints all combination of single digits
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 99; n++)

		putchar(n);
		if (n != 100)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
