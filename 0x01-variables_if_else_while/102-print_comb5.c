#include <stdio.h>
#include <stdlib.h>
/**
 * main - A C Program that prints all possible combinations of
 * two-digit numbers
 * Return: 0 (success)
 *
 */
int main(void)
{
	int c, n;

	for (c  = 0; c < 100; c++)
	{
		for (n = 0; n < 100; n++)
		{
			if (c < n)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (c != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
